#include "constant.h"

Constant::Constant(z3::context * context, QObject *parent) : QObject(parent),
    m_constContext(context),
    m_expression(*context)
{
}

z3::context *Constant::constContext() const
{
    return m_constContext;
}

void Constant::setConstContext(z3::context *constContext)
{
    m_constContext = constContext;
}

z3::expr Constant::expression() const
{
    return m_expression;
}

void Constant::setExpression(const z3::expr &expression)
{
    m_expression = expression;
}

QString Constant::exprString() const
{
    return m_exprString;
}

void Constant::setExprString(const QString &exprString)
{
    m_exprString = exprString;
}
