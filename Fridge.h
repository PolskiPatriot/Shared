#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>
#include "Appliance.h"
using namespace std;
class Fridge: public Appliance {
private:
double Volume;
public:
Fridge(int powerRating, double Volume): Appliance(powerRating){this->Volume = Volume;}
void setVolume(double Volume){this->Volume = Volume;}
double getVolume(){return Volume;}
double getPowerConsumption(){return (get_powerRating()*24*(Volume/100));}
};
#endif