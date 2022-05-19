#include <iostream>
#include <math.h>
#include <fstream>
#pragma once
#include "inny.trojkat.h"

using namespace std;
Inne_tr::Inne_tr(float pkt_x, float pkt_y,float pkt_z, float podstawa, float wysokosc, float bok_b,float bok_c)
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z),Trojkat(podstawa, wysokosc), bok_b(bok_b), bok_c(bok_c)
{kolor="brak";};

void Inne_tr:: inne_3_ustaw(){
cout << "Podaj dlugosc bokow dowolnego trojkata ";
cout<< endl;
cout << "Bok A: "<< endl;
cin >> podstawa;
cout << "Bok B: "<< endl;
cin >> bok_b;
cout << "Bok C: "<< endl;
cin >> bok_c;
cout<<"Ustaw kolor figury: ";
cin >> kolor;
cout<<endl;
inne_3_check();

}

 void Inne_tr:: inne_3_check(){
 if(podstawa+bok_b>= bok_c &  podstawa+bok_c >= bok_b & bok_c+bok_b >= podstawa){
        in3_check=1;
    cout<<  "Podano Trojkat o wymiarach:  "<< podstawa<<" "<< bok_b<<" "<< bok_c<<endl;
 }
 else{
     in3_check=0;
    cout<< "Podano zle dane! Podaj poprawne wymiary figury: "<<endl;
    inne_3_ustaw();

 }}
 void Inne_tr:: inne_3_show(){
 cout<<"Kolor figury: "<< kolor<< endl;
cout<< "Wymiary figury  "<< podstawa<<" "<< bok_b<<" "<< bok_c<<endl;
cout<< "Wspolrzedne figury: ";
show();
cout<<endl;
 }

