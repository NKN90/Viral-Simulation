//
// Created by N on 16/05/2020.
//

#ifndef VIRAL_SIMULATION_MOVEMENTSTRATEGY_H
#define VIRAL_SIMULATION_MOVEMENTSTRATEGY_H


class MovementStrategy {
public:
    virtual double dx(); //Speed on x axis
    virtual double dy(); //Speed on y axis
    virtual void set_dx(double dx);
    virtual void set_dy(double dy);
private:
    double _x = 0,_y = 0, _dx = 0, _dy = 0;
};
class RegMoveStrategy : public MovementStrategy{
public:
    virtual double dx(); //Speed on x axis
    virtual double dy(); //Speed on y axis
    virtual void set_dx(double dx);
    virtual void set_dy(double dy);
private:
    double _x = 0,_y = 0, _dx = 0, _dy = 0;
};
class LockMoveStrategy : public MovementStrategy{
public:
    virtual double dx(); //Speed on x axis
    virtual double dy(); //Speed on y axis
    virtual void set_dx(double dx);
    virtual void set_dy(double dy);
private:
    double _x = 0,_y = 0, _dx = 0, _dy = 0;
};





#endif //VIRAL_SIMULATION_MOVEMENTSTRATEGY_H
