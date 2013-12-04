#include "mapenemy.h"
#include <QtGui>
#include <iostream>

MapEnemy::MapEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
}
MapEnemy::~MapEnemy()
{
    this->hide();
}

QRectF MapEnemy::boundingRect() const{
    return QRectF(600, 480, 30, 60);
}

void MapEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //widget;
    //option;
    painter->drawPixmap(600, 480, 30, 60, QPixmap(":/images/bison"));
}

void MapEnemy::collisionEvent(){
    if ( (collidingItems().size() > 0))
    {
        this->hide();
    }
    update();
}
