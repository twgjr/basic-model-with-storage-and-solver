#include "equation.h"

Equation::Equation(z3::context * context, int recurseLimit, QObject *parent) : QObject(parent),
    m_equationContext(context),
    m_equationExpression(*context),
    m_equationExprVector(*context),
    m_recurseLimit(recurseLimit)

{
}

z3::expr Equation::equationExpression() const
{
    return m_equationExpression;
}

void Equation::setEquationExpression(const z3::expr &equationExpression)
{
    m_equationExpression = equationExpression;
}

void Equation::registerEquation(QString equationString)
{
    z3::expr expression(*m_equationContext);

    //prepare string for parsing
    equationString = equationString.simplified(); //remove whitespace ASCII characters
    equationString.replace( " ", "" ); // remove spaces

    //call the parsing function
    if(equationString.length()>0){
        //start the recursion to parse and append result to the equation list
        qDebug()<<"------------------------------------------";
        m_equationExpression = parseString(equationString,expression,0);
        qDebug()<<"Equation string parsed: "<<equationString;
        makeEquationVector();
    }
}

z3::expr Equation::parseString(QString partialString, z3::expr partialExpression, int recurseDepth)
{
    recurseDepth++;
    QRegExp re("\\d*");
    if(recurseDepth > m_recurseLimit){
        qDebug()<<"Parsing exceeded recursion depth limit!";
        return partialExpression;
    }/*else if(partialString.contains("=")){
        partialExpression =
                this->parseString(partialString.split("=")[0],partialExpression,recurseDepth)
                ==
                this->parseString(partialString.split("=")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains(">=")){
        partialExpression =
                this->parseString(partialString.split(">=")[0],partialExpression,recurseDepth)
                >=
                this->parseString(partialString.split(">=")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains("<=")){
        partialExpression =
                this->parseString(partialString.split("<=")[0],partialExpression,recurseDepth)
                <=
                this->parseString(partialString.split("<=")[1],partialExpression,recurseDepth);
        return partialExpression;
    }*/else if(partialString.contains(">")){
        partialExpression =
                //this->parseString(partialString.split(">")[0],partialExpression,recurseDepth)
                z3::operator<();//>
                //this->parseString(partialString.split(">")[1],partialExpression,recurseDepth);
        return partialExpression;
    }/*else if(partialString.contains("<")){
        partialExpression =
                this->parseString(partialString.split("<")[0],partialExpression,recurseDepth)
                <
                this->parseString(partialString.split("<")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains("*")){
        partialExpression =
                this->parseString(partialString.split("*")[0],partialExpression,recurseDepth)
                *
                this->parseString(partialString.split("*")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains("/")){
        partialExpression =
                this->parseString(partialString.split("/")[0],partialExpression,recurseDepth)
                /
                this->parseString(partialString.split("/")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains("+")){
        partialExpression =
                this->parseString(partialString.split("+")[0],partialExpression,recurseDepth)
                +
                this->parseString(partialString.split("+")[1],partialExpression,recurseDepth);
        return partialExpression;
    }else if(partialString.contains("-")){
        partialExpression =
                this->parseString(partialString.split("-")[0],partialExpression,recurseDepth)
                -
                this->parseString(partialString.split("-")[1],partialExpression,recurseDepth);
        return partialExpression;
    }*/else if(re.exactMatch(partialString)){
        std::string str = partialString.toStdString();
        const char * value = str.c_str();
        return m_equationContext->real_val(value);
    }else {
        return m_equationContext->real_const(partialString.toUtf8());
    }
    return partialExpression;
}

void Equation::makeEquationVector()
{
    qDebug()<<"Expression info...";
    qDebug()<<"                id: "<<m_equationExpression.id();
    qDebug()<<"              kind: "<<m_equationExpression.kind();
    qDebug()<<"              hash: "<<m_equationExpression.hash();
    qDebug()<<"    Number of args: "<<m_equationExpression.num_args();
    for(unsigned i = 0 ; i< m_equationExpression.num_args() ; i++){
        qDebug()<<"        Arg " << i <<" : "<<QString::fromStdString(m_equationExpression.arg(i).to_string());
    }
    qDebug()<<"Function declaration info...";
    qDebug()<<"                id: "<<m_equationExpression.decl().id();
    qDebug()<<"              name: "<<QString::fromStdString(m_equationExpression.decl().name().str());
    qDebug()<<"             arity: "<<m_equationExpression.decl().arity();
    qDebug()<<"             range: "<<QString::fromStdString(m_equationExpression.decl().range().to_string());
    qDebug()<<"            domain: "<<QString::fromStdString(m_equationExpression.decl().domain(0).to_string());
    qDebug()<<"          is const: "<<m_equationExpression.decl().is_const();
    qDebug()<<"              kind: "<<m_equationExpression.decl().decl_kind();
}
