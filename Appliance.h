#ifndef APPLIANCE_H
#define APPLIANCE_H
#include <string>
using namespace std;
class Appliance {
private:
bool isOn;
int powerRating;
public:
Appliance():isOn(false), powerRating(0) {};
Appliance(int powerRating): powerRating(powerRating), isOn(0){};

void turnOn(){isOn = true;}
void turnOff(){isOn = true;}
virtual double getPowerConsumption(){return 0;}
bool get_isOn(){return isOn;}
bool set_isOn(bool isOn){this->isOn = isOn;}
int get_powerRating(){return powerRating;}
int set_powerRating(int powerRating){this->powerRating = powerRating;}

};
#endif
