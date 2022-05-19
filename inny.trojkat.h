#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "trojkat.h"
#include "figurygeomertryczne.h"
using namespace std;
class Inne_tr: public Trojkat{
    private:
        int in3_check;

    protected:

        void inne_3_check();
    public:
        string nazwa;

        string kolor;

        float bok_b, bok_c;

        Inne_tr(float=0, float=0, float=0, float=0 , float=0,float=0 , float=0 );

        void inne_3_ustaw();
        void inne_3_show();

 Inne_tr operator++(){
 cout<<"Zmien nazwe: ";
    cin >> nazwa;
  return 0 ; }

    };
