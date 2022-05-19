#include <iostream>
#include <math.h>
#include <fstream>
#pragma once
#include "innyczworokat.h"

using namespace std;

Inne_czwor:: Inne_czwor(float pkt_x, float pkt_y,float pkt_z, float dlugosc, float szerokosc,float bok_3,  float bok_4 ,int opisany_na)
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z), Czworokat(dlugosc, szerokosc, bok_3, bok_4), opisany_na(opisany_na)
{
   if (dlugosc+bok_3== szerokosc+bok_4){
    opisany_na= 1;
    kolor="brak";
   }
};

void Inne_czwor:: inne_4_ustaw(){
cout << "Podaj dlugosc bokow dowolnego czworokata ";
cout<< endl;
cout << "Bok A: "<< endl;
cin >> dlugosc;
cout << "Bok B: "<< endl;
cin >> szerokosc;
cout << "Bok C: "<< endl;
cin >> bok_3;
cout << "Bok D: "<< endl;
cin >> bok_4;
cout << "Ustaw kolor figury: ";
cin >> kolor;

cout<< "Podano czworokat o wymiarach  "<< dlugosc<<" "<< szerokosc<<" "<< bok_3<<" "<< bok_4 <<endl;
};


void Inne_czwor::  inne_4_opisany_na (){
if (dlugosc+bok_3== szerokosc+bok_4){
    opisany_na= 1;
    cout<< "Podany czworokat mozna opisac na okregu"<< endl;
   }
else{
    cout << "Podany czworokat nie mozna opisac na okregu"<< endl;
}
   };

void Inne_czwor:: inne_4_show(){
cout<<"Kolor figury: "<< kolor<< endl;
cout<< "Wymiary figury  "<< dlugosc<<" "<< szerokosc<<" "<< bok_3<<" "<< bok_4 <<endl;
cout<< "Wspolrzedne figury: ";
show();
cout<<endl;
obw_4k();
inne_4_opisany_na();
}
