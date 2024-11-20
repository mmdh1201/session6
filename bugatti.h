#ifndef BUGATTI_H
#define BUGATTI_H
#include <iostream>
using namespace std;

class item{
    protected:
        static int id;
        const string factory;
        const string model;
        const string color;
        const int year;
        bool sellable;
        bool rentable;
    public:
        virtual void drive()=0;
        virtual void info()=0;
        item(string,string,string,int,bool,bool);
        ~item();
};
class sellitem{
    protected:
        const long cost;
        bool issold;
    public:
        sellitem(int);
        void request();
        ~sellitem();

};
class rentitem{
    protected:
        const long costrent;
        bool isrented;
    public:
        rentitem(int);
        void request();
        bool status();
        ~rentitem();
};
class vehicle{
    protected:
        const int maxspeed;
    public:
        vehicle(int);
        ~vehicle();
        virtual void drive()=0;
};

class car:public vehicle,public sellitem,virtual public item{
    public:
        car(int,int,string,string,string,int);
        void info();
        void drive();
        ~car();
};

class bike:public vehicle, public sellitem , public rentitem,virtual public item{
    public:
        bike(int,int,int,string,string,string,int);
        void info();
        void drive();
        ~bike();
};
class bicycle:public vehicle,public rentitem,virtual public item{
    public:
        bicycle(int,int,string,string,string,int);
        void info();
        void drive();
        ~bicycle();
};

#endif