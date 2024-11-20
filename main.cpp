#include <iostream>
#include "bugatti.h"
#include "shop.h"
#include <string>
using namespace std;


int main()
{
    List shop;
    int option;
    int ms,sc,rc,y;
    string fac;
    string col;
    string mod;
    while (true){
        cout<<"1.car 2.bike 3.bicycle"<<endl;
        cout<<"0 for exite.\n";
        cin>>option;
        switch (option)
        {
        case 1:{
            cout<<"enter info:(maxspeed,sellcost,year,fac,col,mod)\n";
            cin>>ms;
            cin>>sc;
            cin>>y;
            cin>>fac;
            getchar();
            getline(cin,col);
            cin>>mod;
            car* i = new car(ms,sc,fac,mod,col,y);
            shop.insertFirst(i);
            break;
        } 
        case 2:{
            cout<<"enter info:(maxspeed,sellcost,rentcost,year,fac,col,mod)\n";
            cin>>ms;
            cin>>sc;
            cin>>y;
            cin>>fac;
            getline(cin,col);
            cin>>mod;
            bike* i = new bike(ms,sc,rc,fac,mod,col,y);
            shop.insertFirst(i);
        }
            
        case 3:{
            cout<<"enter info:(maxspeed,rentcost,year,fac,col,mod)\n";
            cin>>ms;
            cin>>rc;
            cin>>y;
            cin>>fac;
            getline(cin,col);
            cin>>mod;          
            bicycle* i = new bicycle(ms,rc,fac,mod,col,y);
            shop.insertFirst(i);
        }
        case 0:{
            cout<<"exite"<<endl;
            break;
        }
        default:{
            cout << "invalid input."<<endl;
            break;
        }
        }
        if (option == 0){break;}
    }
    shop.showitems();
    return 0;
}
