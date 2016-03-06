#ifndef DELTAVOBJECT_H
#define DELTAVOBJECT_H
#include <QString>
#include <math.h>
class deltaVObject
{
  public:
    double mass;
    double fuel;
    double isp;
    QString calculateDeltaV(){
        QString returnString;
        returnString.setNum(log((mass)/(mass-fuel/90))*isp*9.81);
        return returnString;
    }
};

#endif // DELTAVOBJECT_H

