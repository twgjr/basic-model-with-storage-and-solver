#ifndef CONSTANT_H
#define CONSTANT_H

#include <QObject>
#include "z3++.h"
#include <QDebug>

class Constant : public QObject
{
    Q_OBJECT
public:
    explicit Constant(z3::context * context, QObject *parent = nullptr);

    z3::context *constContext() const;
    void setConstContext(z3::context *constContext);

    z3::expr expression() const;
    void setExpression(const z3::expr &expression);

    QString exprString() const;
    void setExprString(const QString &exprString);

signals:

private:
    z3::context * m_constContext;
    z3::expr m_expression;
    QString m_exprString;

};

#endif // CONSTANT_H
