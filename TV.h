#ifndef TV_H
#define TV_H
#include <string>
#include "Appliance.h"
using namespace std;
class TV: public Appliance {
private:
    double screenSize;
public:
    TV(int powerRating, double screenSize): Appliance(powerRating){this->screenSize = screenSize;}
    void setScreenSize(double screenSize){this->screenSize = screenSize;}
    double getscreenSize(){return screenSize;}
    double getPowerConsumption(){return (get_powerRating()*24*(screenSize/10));}
};
#endif