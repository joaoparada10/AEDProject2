//
// Created by jonas on 29/12/2023.
//

/**

@file Flight.cpp
@brief Implementation of the Flight class methods
*/

#include "Flight.h"

Flight::Flight(Airport Source, Airport Target, Airline airline)
        : source(Source), target(Target), airline(airline) {}

Airline & Flight::getAirline()
{
    return this->airline;
}

Airport Flight::getSource()
{
    return this->source;
}

Airport Flight::getTarget()
{
    return this->target;
}



