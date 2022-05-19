#include <iostream>
#include <math.h>
#include <fstream>
#pragma once
#include "ostroslupczworokatny.h"

using namespace std;


Ostr_czwor_pr::Ostr_czwor_pr(float pkt_x, float pkt_y,float pkt_z, float przekatna, float ostr_4_h )
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z),Kwadrat(przekatna),ostr_4_h(ostr_4_h){
 kolor="brak";};

 void Ostr_czwor_pr::ostr_4_ustaw(){

cout << "Podaj dlugosc podstawy: ";
cin >> dlugosc;
szerokosc=dlugosc;
cout << "Podaj wysokosc ostroslupa: ";
cin >> ostr_4_h;
cout<<"Ustaw kolor figury: ";
cin >> kolor;
cout<<endl;
cout<< "Ostroslup czworokatny prosty o podstawie: "<< szerokosc<< " i wysokosci: "<< ostr_4_h<<endl;

};

void Ostr_czwor_pr:: ostr_4_pkt_w(){
float poz_x, poz_y, poz_z, lin_s;
poz_x= Punkt::pkt_x+ szerokosc/2;
poz_y= Punkt::pkt_y+ ostr_4_h;
poz_z= Punkt::pkt_z+ dlugosc/2;
lin_s= sqrt(poz_x*poz_x+poz_y*poz_y+ poz_z*poz_z);
cout << "Pozycja Wierzcholka ostroslupa S to: ("<<poz_x<<", "<< poz_y<<", "<< poz_z<<" )"<<endl;
cout << "Odleglosc wierzcholka s od poczatku ukladu wspolrzednych to: "<< lin_s<<endl;};

void Ostr_czwor_pr:: ostr_4_objetosc(){
ostr_4_v= (dlugosc*dlugosc*ostr_4_h)/3;
cout <<"Objetosc figury: "<< ostr_4_v<<endl;
}

void Ostr_czwor_pr:: ostr_4_show(){
cout<<"Kolor figury: "<< kolor<< endl;
cout<<"Wysokosc ostroslupa: "<< ostr_4_h<<endl;
cout<<"Dlugosc boku podstawy: "<< dlugosc<< endl;
ostr_4_objetosc();
cout<< "Wspolrzedne figury: ";
show();
cout<<endl;
ostr_4_pkt_w();
}
