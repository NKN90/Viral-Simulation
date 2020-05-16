// Corona Simulation - basic simulation of a human transmissable virus
// Copyright (C) 2020  wbrinksma

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "subject.h"
#include <math.h>

namespace corsim
{

Subject::Subject(int x, int y, int radius, bool infected)
{
    this->_x = x;
    this->_y = y;
    this->_radius = radius;
    this->_infected = infected;
}

double Subject::x()
{
    return this->_x;
}

double Subject::y()
{
    return this->_y;
}

void Subject::set_x(double x)
{
    this->_x = x;
}

void Subject::set_y(double y)
{
    this->_y = y;
}

double Subject::dx()
{
    return _dx;
}

double Subject::dy()
{
    return _dy;
}

void Subject::set_dx(double dx)
{
    _dx = dx;
}

void Subject::set_dy(double dy)
{
    _dy = dy;
}

int Subject::radius()
{
    return this->_radius;
}

bool Subject::infected()
{
    return this->_infected;
}

void Subject::infect()
{
    if(!immunity()){
        _infected = true;
        sickDays = SICKDAYS;
    }
}

bool Subject::immunity() {
    if(immunityDays > 0)
        return true;
    return false;
}

double Subject::angle()
{
    return atan2(_dy,_dx);
}

double Subject::speed()
{
    return sqrt(_dx * _dx + _dy * _dy);
}

void Subject::tick(){
    if(immunity())
        --immunityDays;
    if(infected())
        --sickDays;
    if(sickDays == 1){
        --sickDays;
        _infected = false;
        immunityDays = IMMUNITY;
    }
}

}