#ifndef EQUATION_H
#define EQUATION_H

#include <QObject>
#include "z3++.h"
#include <QDebug>
#include "variable.h"
#include "constant.h"

class Equation : public QObject
{
    Q_OBJECT
public:
    explicit Equation(z3::context * context, int recurseLimit, QObject *parent = nullptr);

    QVector<Variable *> variableList() const;
    void setVariableList(const QVector<Variable *> &variableList);
    void appendVariable();
    void removeVariable(int index);
    void updateVariable(int index, Variable * variable);
    void clearVariableList();

    QVector<Constant *> constantList() const;
    void setConstantList(const QVector<Constant *> &constantList);
    void appendConstant();
    void removeConstant(int index);
    void updateConstant(int index, Constant * constant);
    void clearConstantList();

    z3::expr equationExpression() const;
    void setEquationExpression(const z3::expr &equationExpression);
    void registerEquation(QString equationString);
    z3::expr parseString(QString partialString, z3::expr partialExpression, int recurseDepth);
    void concatenateExprVector();
    void makeEquationVector();

signals:

private:
    z3::context * m_equationContext;
    QVector<Variable*> m_variableList;
    QVector<Constant*> m_constantList;  //constants are also variables in z3, but are set to an exact value;
    z3::expr m_equationExpression;
    z3::expr_vector m_equationExprVector;
    int m_recurseLimit;
};

#endif // EQUATION_H
