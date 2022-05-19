#include <iostream>
#include <math.h>
#pragma once
#include "kwadrat.h"

using namespace std;

Kwadrat:: Kwadrat(float pkt_x, float pkt_y,float pkt_z, float dlugosc, float szerokosc,float bok_3,float bok_4,float przekatna)
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z), Czworokat( dlugosc, szerokosc, bok_3, bok_4), przekatna(przekatna)
{
   pole= dlugosc*szerokosc;
   przekatna= sqrt(dlugosc);
};

void Kwadrat::kw_ustaw(){
    float kw_bok;
    cout<< "Podaj dlugosc krawedzi kwadratu: ";
    cin>> kw_bok;
    cout<<endl;
    dlugosc=szerokosc=bok_3=bok_4=kw_bok;
};

void Kwadrat::kw_pole(){
    pole= dlugosc*dlugosc;
};
