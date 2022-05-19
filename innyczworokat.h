#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "czworokat.h"
#include "figurygeomertryczne.h"

using namespace std;
class Inne_czwor: public Czworokat{
private:
int opisany_na;
protected:
    void inne_4_opisany_na();
public:
    string kolor;
    string nazwa;
    Inne_czwor(float=0, float=0, float=0, float=0, float=0,float=0,float=0, int=0);
    void inne_4_ustaw();

    void inne_4_show();

    Inne_czwor operator++(){
    cout<<"Zmien nazwe: ";
    cin >> nazwa;
    return 0 ;}
    };
