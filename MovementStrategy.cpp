//
// Created by N on 16/05/2020.
//

#include "MovementStrategy.h"
double MovementStrategy::dx(){return _dx;}
double MovementStrategy::dy(){return _dy;}
void MovementStrategy::set_dx(double dx) {this->_dx = dx;}
void MovementStrategy::set_dy(double dy) {this->_dy = dy;}

double RegMoveStrategy::dx(){return _dx;}
double RegMoveStrategy::dy(){return _dy;}
void RegMoveStrategy::set_dx(double dx) {this->_dx = dx;}
void RegMoveStrategy::set_dy(double dy) {this->_dy = dy;}

double LockMoveStrategy::dx(){return 0;}
double LockMoveStrategy::dy(){return 0;}
void LockMoveStrategy::set_dx(double dx) {this->_dx = dx;}
void LockMoveStrategy::set_dy(double dy) {this->_dy = dy;}