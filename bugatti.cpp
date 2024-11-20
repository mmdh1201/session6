#include <iostream>
#include "bugatti.h"
using namespace std;
int item::id = 0;
item::item(string fac,string mod, string col, int year,bool typesell,bool typerent):
    factory(fac),model(mod),color(col),year(year),sellable(typesell),rentable(typerent){id++;};

sellitem::sellitem(int costsell):cost(costsell){};

rentitem::rentitem(int rentcost):costrent(rentcost){};

vehicle::vehicle(int speedmax):maxspeed(speedmax){};

car::car(int maxspeed,int sellcost,string fac,string mod,string col,int year):
    vehicle(maxspeed),sellitem(sellcost),item(fac,mod,col,year,true,false){};

bike::bike(int maxspeed,int sellcost,int rentcost,string fac,string mod,string col, int year):
    vehicle(maxspeed),sellitem(sellcost),rentitem(rentcost),item(fac,mod,col,year,true,true){}

bicycle::bicycle(int maxspeed,int rentcost,string fac,string mod,string col, int year):
    vehicle(maxspeed),rentitem(rentcost),item(fac,mod,col,year,false,true){}
item::~item(){}
sellitem::~sellitem(){}
rentitem::~rentitem(){}
vehicle::~vehicle(){}
car::~car(){cout << "car destructor."<<endl;}
bike::~bike(){cout<< "bike destructor."<<endl;}
bicycle::~bicycle(){cout<<"bicycle destructor"<<endl;}




void sellitem::request(){
    cout << "The price is: "<< this->cost<<endl;
}
void rentitem::request(){
    cout<< "The rental is: " << this->costrent<<endl;
}
bool rentitem::status(){return this->isrented;}

void car::info(){
    cout << "id: "<< id<<endl;
    cout<<"Factory: "<< this->factory<<endl;
    cout<<"Model: "<< this->model<<endl;
    cout<<"Color: "<< this->color<<endl;
    cout<<"Year: " << this->year <<endl;
    cout << "The item is for sell."<<endl;
    cout << "The price is: "<< this->cost<<endl;
    cout<<"Max speed: "<< this->maxspeed<<endl;
    cout<< "*****************************" << endl;
}
void bike::info(){
    cout<<"Factory: "<< this->factory<<endl;
    cout<<"Model: "<< this->model<<endl;
    cout<<"Color: "<< this->color<<endl;
    cout<<"Year: " << this->year <<endl;
    cout << "The item is for sell and rent."<<endl;
    cout << "The price is: "<< this->cost<<endl;
    cout << "The rental is: "<< this->costrent<<endl;
    cout<<"Max speed: "<< this->maxspeed<<endl;
    cout<< "*****************************" << endl;
}
void bicycle::info(){
    cout<<"Factory: "<< this->factory<<endl;
    cout<<"Model: "<< this->model<<endl;
    cout<<"Color: "<< this->color<<endl;
    cout<<"Year: " << this->year <<endl;
    cout << "The item is for rent."<<endl;
    cout << "The rental is: "<< this->costrent<<endl;
    cout<<"Max speed: "<< this->maxspeed<<endl;
    cout<< "*****************************" << endl;
}

void car::drive(){
    for (int i=0;i<=maxspeed;i++){
        cout << i << " ";
    }
    cout <<endl;
};
void bike::drive(){
    for (int i=0;i<=maxspeed/2;i++){
        cout << i << " ";
    }
    cout <<endl;
};
void bicycle::drive(){
    for (int i=0;i <= maxspeed/2;i++){
        cout << "pedaling" << " ";
    }
    cout <<endl;
};



