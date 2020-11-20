#ifndef VARIABLE_H
#define VARIABLE_H

#include <QObject>
#include "z3++.h"
#include <QDebug>
//#include "equation.h"

class Variable : public QObject
{
    Q_OBJECT

public:
    explicit Variable(z3::context * context, QObject *parent = nullptr);

    z3::context *varContext() const;
    void setVarContext(z3::context *varContext);

    z3::expr expression() const;
    void setExpression(const z3::expr &expression);

    QString exprString() const;
    void setExprString(const QString &exprString);

signals:

private:
    z3::context * m_varContext;
    z3::expr m_expression;
    QString m_exprString;
    double maxVal;
    double minVal;
    double nomVal;
    z3::expr maxValExpr;
    z3::expr minValExpr;
    z3::expr nomValExpr;

};

#endif // VARIABLE_H
