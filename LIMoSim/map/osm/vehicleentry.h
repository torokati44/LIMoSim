#ifndef LIMOSIM_VEHICLEENTRY_H
#define LIMOSIM_VEHICLEENTRY_H

#include "LIMoSim/settings/domelement.h"
#include "LIMoSim/vehicles/car.h"

namespace LIMoSim
{

class VehicleEntry : public DOMElement
{
public:
    VehicleEntry();

    static VehicleEntry* fromCar(Car *_car);
    void addTag(const std::string &_key, const Variant &_value);

    Car* toCar();


};

}

#endif // LIMOSIM_VEHICLEENTRY_H
