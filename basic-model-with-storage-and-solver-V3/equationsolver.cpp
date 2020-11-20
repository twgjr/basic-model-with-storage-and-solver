#include "equationsolver.h"

EquationSolver::EquationSolver(z3::context * context, int recurseLimit, QObject *parent) : QObject(parent),
    m_mainContext(context),
    m_recurseLimit(recurseLimit),
    m_optimizer(*context),
    m_optModel(*context),
    m_z3solver(*context)
{
}

void EquationSolver::registerEquation(QString equationString)
{
    appendEquation();
    m_equationList[m_equationList.size()-1]->registerEquation(equationString);
}

void EquationSolver::solveEquations()
{
    //clear the solver before loading new equations
    resetSolver();

    //load all equations from the stored list
    qDebug()<<"Size of equation list: "<<m_equationList.size();
    for(int i = 0;i<m_equationList.size();i++){
        m_z3solver.add(m_equationList[i]->equationExpression());
    }

    switch (m_z3solver.check()) {
    case 0:{//UNSAT
        qDebug()<<"UNSAT!";
        break;
    }
    case 1:{//SAT
        printModel();
        break;
    }
    case 2:{//UKNOWN
        qDebug()<<"UNKNOWN!";
        break;
    }
    default:{
        qDebug()<<"No valid solver state!";
        break;
    }
    }
}

void EquationSolver::printModel()
{
    m_optModel = m_z3solver.get_model();
    qDebug()<<"Got model. Traversing model.";
    qDebug() << "Model has " << QString::fromStdString(std::to_string(m_optModel.size())) << " constants:";
    // traversing the model
    for (unsigned i = 0; i < m_optModel.size(); i++) {
        z3::func_decl v = m_optModel[i];
        // this problem contains only constants
        //assert(v.arity() == 0);

        //qDebug()<< QString::fromStdString(v.name().str()) << " = " << QString::fromStdString(m_optModel.get_const_interp(v).get_decimal_string(3));
        //qDebug()<< QString::fromStdString(v.name().str()) << " = " << QString::fromStdString(m_optModel.get_const_interp(v).get_decimal_string(0));
        qDebug()<< QString::fromStdString(v.name().str()) << " = " << QString::fromStdString(m_optModel.get_const_interp(v).get_decimal_string(-1));
    }

}

void EquationSolver::resetSolver()
{
    //removes all assertions
    m_z3solver.reset();
}

QVector<Equation *> EquationSolver::equationList() const
{
    return m_equationList;
}

void EquationSolver::setEquationList(const QVector<Equation *> &equationList)
{
    m_equationList = equationList;
}

void EquationSolver::appendEquation()
{
    m_equationList.append(new Equation(m_mainContext,100));
}

void EquationSolver::clearEquationList()
{
    m_equationList.clear();
}




