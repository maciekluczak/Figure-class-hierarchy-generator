#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "kwadrat.h"
#include "punkt.h"
#include "figurygeomertryczne.h"

using namespace std;
class Ostr_czwor_pr: public Kwadrat, public Punkt{
    private:
    float ostr_4_v;

    protected:
        void ostr_4_objetosc();

        void ostr_4_pkt_w();

    public:
        string kolor;

        string nazwa;

        float ostr_4_h;

        Ostr_czwor_pr(float=0, float=0, float=0, float=0 , float=0);

        void ostr_4_ustaw();

        void ostr_4_show();

        Ostr_czwor_pr operator++(){
        cout<<"Zmien nazwe: ";
        cin >> nazwa;
        return 0 ;}
        };
