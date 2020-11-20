#include "variable.h"

Variable::Variable(z3::context * context, QObject *parent) : QObject(parent),
    m_varContext(context),
    m_expression(*context),
    maxValExpr(*context),
    minValExpr(*context),
    nomValExpr(*context)
{
}

z3::context *Variable::varContext() const
{
    return m_varContext;
}

void Variable::setVarContext(z3::context *varContext)
{
    m_varContext = varContext;
}

z3::expr Variable::expression() const
{
    return m_expression;
}

void Variable::setExpression(const z3::expr &expression)
{
    m_expression = expression;
}

QString Variable::exprString() const
{
    return m_exprString;
}

void Variable::setExprString(const QString &exprString)
{
    m_exprString = exprString;
}
