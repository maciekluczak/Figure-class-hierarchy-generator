#include <iostream>
#include <math.h>
#pragma once
#include "czworokat.h"

using namespace std;

Czworokat::Czworokat(float pkt_x, float pkt_y,float pkt_z, float dlugosc, float szerokosc,float bok_3,float bok_4)
 :Figury_geometryczne<float>(pkt_x, pkt_y, pkt_z), dlugosc(dlugosc), szerokosc(szerokosc), bok_3(bok_3), bok_4(bok_4)
{};

void Czworokat::obw_4k(){

obw= szerokosc+ dlugosc + bok_3 + bok_4;

cout<< "Obwod czworokata to: "<< obw<< endl;
}
