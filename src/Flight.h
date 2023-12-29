//
// Created by jonas on 29/12/2023.
//

#ifndef AEDPROJECT2_FLIGHT_H
#define AEDPROJECT2_FLIGHT_H
#include <string>
#include "Airport.h"
#include "Airline.h"

class Flight {
private:
    Airport source;
    Airport target;
    Airline airline;

public:
    Flight(Airport Source, Airport Target , Airline airline);
    Airport getSource();
    Airport getTarget();
    Airline getAirline();

};


#endif //AEDPROJECT2_FLIGHT_H
