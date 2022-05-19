#include <iostream>
#include <math.h>
#include <fstream>
#pragma once
#include "ostrosluptrojkatny.h"

using namespace std;

Ostr_tr_pr::Ostr_tr_pr(float pkt_x, float pkt_y,float pkt_z, float podstawa, float wysokosc, float ostr_h)
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z),Trojkat( podstawa, wysokosc),ostr_h(ostr_h)
 {
     wysokosc= (podstawa*sqrt(3))/2;
     kolor="brak";
 };

 void Ostr_tr_pr::ostr_3_ustaw(){

cout << "Podaj dlugosc podstawy: ";
cin >> podstawa;
wysokosc= (podstawa*sqrt(3))/2;
cout << "Podaj wysokosc ostroslupa: ";
cin >> ostr_h;
cout<<"Ustaw kolor figury: ";
cin >> kolor;
cout<<endl;
cout<< "Trojkat rownoboczny o podstawie: "<< podstawa<< " i wysokosci: "<< ostr_h<<endl;

}

void Ostr_tr_pr:: ostr_3_pkt_w(){
float poz_x, poz_y, poz_z, lin_s;
poz_x= Punkt::pkt_x+ podstawa/2;
poz_y= Punkt::pkt_y+ostr_h;
poz_z= Punkt::pkt_z+ wysokosc/3;
lin_s= sqrt(poz_x*poz_x+poz_y*poz_y+ poz_z*poz_z);
cout << "Pozycja Wierzcholka ostroslupa S to: ("<<poz_x<<", "<< poz_y<<", "<< poz_z<<" )"<<endl;
cout << "Odleglosc wierzcholka s od poczatku ukladu wspolrzednych to: "<< lin_s<<endl;};

void Ostr_tr_pr::ostr_3_show(){

    cout<< "Kolor Figury: " << kolor << endl;
    cout<< "Dlugosc boku podstawy: "<< podstawa<< endl;
    cout<< "Wysokosc figury: "<< ostr_h<< endl;
    ostr_3_objetosc();
    cout<<"Wspolrzedne: ";
    show();
    ostr_3_pkt_w();

}

void Ostr_tr_pr:: ostr_3_objetosc(){
ostr_3_v= (podstawa*wysokosc*ostr_h)/6;
cout<<"Objetosc figury: "<< ostr_3_v<<endl;
}
