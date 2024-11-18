#ifndef BUGATTI_H
#define BUGATTI_H
#include <iostream>
using namespace std;

class vehicle{
    protected:
        const string factory;
        const string model;
        const string color;
        const int year;
    public:
        virtual void drive()=0;
        vehicle(string,string,string,int);
        ~vehicle();
};
class sellitem{
    protected:
        const long cost;
        bool issold;
    public:
        sellitem(int);
        ~sellitem();

};
class rentitem{
    protected:
        const long costrent;
        bool isrented;
    public:
        rentitem(int);
        bool status();
        ~rentitem();

};
class car:public sellitem{
    protected:
        const int maxspeed;
    public:
        car(int);
        void drive();
        ~car();
};
class bike:public vehicle, public sellitem , public rentitem{
    public:
        bike(int);
        void drive();
        ~bike();
};
class bicycle:public vehicle,public rentitem{
    public:
        bicycle();
        void drive();
        ~bicycle();
};

#endif