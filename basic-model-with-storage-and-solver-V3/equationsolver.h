#ifndef EQUATIONPARSER_H
#define EQUATIONPARSER_H

#include <QObject>
#include "z3++.h"
#include <QDebug>
#include "equation.h"

class EquationSolver : public QObject
{
    Q_OBJECT
public:
    explicit EquationSolver(z3::context * context, int recurseLimit, QObject *parent = nullptr);

    void registerEquation(QString equationString);
    void solveEquations();
    void printModel();
    void resetSolver();

    QVector<Equation *> equationList() const;
    void setEquationList(const QVector<Equation *> &equationList);
    void appendEquation();
    void clearEquationList();
    //TODO:
    // 1. function that sets constraint equations for variables extracted from equations
    // for example, upper (n>x) and lower bounds (x<n) and nominal/average/rms values
    // 2. function that generates multiple sets of equations to linearize control inputs for PSS analysis

signals:

private:
    z3::context * m_mainContext;
    int m_recurseLimit;
    QVector<Equation*> m_equationList;
    z3::optimize m_optimizer;
    z3::model m_optModel;
    z3::solver m_z3solver;
};

#endif // EQUATIONPARSER_H
