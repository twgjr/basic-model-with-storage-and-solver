#include "blockitem.h"



BlockItem::BlockItem(z3::context *context,int recurseLimit, QObject *parent) : QObject(parent),
    m_category(""),
    m_id(0),
    m_blockXPosition(0),
    m_blockYPosition(0),
    m_equationString(""),
//    m_solverEquation(*context),
    m_equationObject(context,recurseLimit),
    m_solverContextReference(context)
{
    qDebug()<<"Block Item created.";
}

void BlockItem::jsonRead(QJsonObject &json)
{
    if (json.contains("category") && json["category"].isString()){
        setCategory(json["category"].toString());
    }else{
        qDebug()<<"Could not load category";
    }

    if (json.contains("Block_ID") && json["Block_ID"].isDouble()){
        setId(json["Block_ID"].toInt());
    }else{
        qDebug()<<"Could not load id";
    }

    if (json.contains("BlockXPosition") && json["BlockXPosition"].isDouble()){
        setBlockXPosition(json["BlockXPosition"].toInt());
    }else{
        qDebug()<<"Could not load BlockXPosition";
    }

    if (json.contains("BlockYPosition") && json["BlockYPosition"].isDouble()){
        setBlockYPosition(json["BlockYPosition"].toInt());
    }else{
        qDebug()<<"Could not load BlockYPosition";
    }
    if (json.contains("Equation") && json["Equation"].isString()){
        setEquation(json["Equation"].toString());
    }else{
        qDebug()<<"Could not load Equation";
    }
}

void BlockItem::jsonWrite(QJsonObject &json)
{
    json["Block_ID"] = m_id;
    json["category"] = m_category;
    json["BlockXPosition"] = m_blockXPosition;
    json["BlockYPosition"] = m_blockYPosition;
    json["Equation"] = m_equationString;
    //Commented code sample for how to add an array
    /*
    QJsonArray npcArray;
    for (const Character &npc : mNpcs) {
        QJsonObject npcObject;
        npc.write(npcObject);
        npcArray.append(npcObject);
    }
    json["npcs"] = npcArray;
    */
}

QString BlockItem::category() const
{
    //qDebug()<<"getting block item category: "<<m_category;
    return m_category;

}

void BlockItem::setCategory(QString category)
{
    if (m_category == category)
        return;

    m_category = category;
    //qDebug()<<"set block item category: "<<m_category;

    emit categoryChanged(m_category);
}

int BlockItem::id() const
{
    //qDebug()<<"getting block item id: "<<m_id;
    return m_id;
}

void BlockItem::setId(int id)
{
    if (m_id == id)
        return;

    m_id = id;
    //qDebug()<<"set block item id: "<<m_id;
    emit idChanged(m_id);
}

int BlockItem::blockXPosition() const
{
    //qDebug()<<"getting block item x: "<<m_blockXPosition;
    return m_blockXPosition;
}

void BlockItem::setBlockXPosition(int blockXPosition)
{
    if (m_blockXPosition == blockXPosition)
        return;

    m_blockXPosition = blockXPosition;
    //qDebug()<<"set block item x: "<<m_blockXPosition;
    emit blockXPositionChanged(m_blockXPosition);
}

int BlockItem::blockYPosition() const
{
    //qDebug()<<"getting block item y: "<<m_blockYPosition;
    return m_blockYPosition;
}

void BlockItem::setBlockYPosition(int blockYPosition)
{
    if (m_blockYPosition == blockYPosition)
        return;

    m_blockYPosition = blockYPosition;
    //qDebug()<<"set block item y: "<<m_blockYPosition;
    emit blockYPositionChanged(m_blockYPosition);
}

QString BlockItem::equation() const
{
    //qDebug()<<"getting block item equation: "<<m_equation;
    return m_equationString;
}

void BlockItem::setEquation(QString equation)
{
    if (m_equationString == equation)
        return;

    m_equationString = equation;
    emit equationChanged(m_equationString);
}

void BlockItem::setEquationObject(QString equationString)
{
    m_equationObject.registerEquation(equationString);
}

Equation* BlockItem::equationObject()
{
    return &m_equationObject;
}
