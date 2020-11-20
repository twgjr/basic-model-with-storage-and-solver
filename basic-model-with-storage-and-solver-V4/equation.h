#ifndef EQUATION_H
#define EQUATION_H

#include <QObject>
#include "z3++.h"
#include <QDebug>


class Equation : public QObject
{
    Q_OBJECT
public:
    explicit Equation(z3::context * context, int recurseLimit, QObject *parent = nullptr);

    z3::expr equationExpression() const;
    void setEquationExpression(const z3::expr &equationExpression);
    void registerEquation(QString equationString);
    z3::expr parseString(QString partialString, z3::expr partialExpression, int recurseDepth);
    void concatenateExprVector();
    void makeEquationVector();

signals:

private:
    z3::context * m_equationContext;
    z3::expr m_equationExpression;
    z3::expr_vector m_equationExprVector;
    int m_recurseLimit;
};

#endif // EQUATION_H
