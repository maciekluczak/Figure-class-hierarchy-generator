#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "punkt.h"
#include "trojkat.h"
#include "figurygeomertryczne.h"
using namespace std;

class Ostr_tr_pr: public Trojkat, public Punkt{
    private:
    float ostr_3_v;
    protected:
        void ostr_3_objetosc();

        void ostr_3_pkt_w();

    public:
    float ostr_h;
    string kolor;
    string nazwa;
    Ostr_tr_pr(float=0, float=0, float=0, float=0 , float=0, float=0);
    void ostr_3_ustaw();
    void ostr_3_show();

    Ostr_tr_pr operator++(){
    cout<<"Zmien nazwe: ";
    cin >> nazwa;
    return 0 ;}
    };
