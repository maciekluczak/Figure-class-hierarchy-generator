#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
using namespace std;

template<typename T>
class Figury_geometryczne{
    private:
        float pkt_line;

    protected:
    void przeniesienie()
    {
        T x,y,z;
        cout << endl <<  "O ile jednostek przestawic x? : ";
        cin >> x;
        cout <<endl << "O ile jednostek przestawic y? : ";
        cin >> y;
        cout << endl <<"O ile jednostek przestawic z? : ";
        cin >> z;

        pkt_x=x + pkt_x;
        pkt_y=y + pkt_y;
        pkt_z=z + pkt_z;
    };

    public:
    float pkt_x;
    float pkt_y;
    float pkt_z;


Figury_geometryczne(T x, T y, T z)
{
    pkt_x=x;
    pkt_y=y;
    pkt_z=z;
};
void show()
{
    cout << " x: "<< pkt_x <<" y: "<<pkt_y <<" z: " <<pkt_z <<endl;

};
void ustaw_pozycje()
{
    T x,y,z;
    cout << endl <<  "Nowa Pozycja x: ";
    cin >> x;
    cout <<endl << "Nowa Pozycja y: ";
    cin >> y;
    cout << endl <<"Nowa Pozycja z: ";
    cin >> z;

    pkt_x=x;
    pkt_y=y;
    pkt_z=z;
};

void odleglosc_uklad(){
pkt_line= sqrt(pkt_x*pkt_x+pkt_y*pkt_y+pkt_z*pkt_z);
cout << "Odleglosc figury od srodka ukladu: "<< pkt_line<<endl;}

};
