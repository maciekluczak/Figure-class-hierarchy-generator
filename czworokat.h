#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "figurygeomertryczne.h"

using namespace std;

class Czworokat: public virtual Figury_geometryczne<float>{
    private:
        float obw;

        protected:

        void obw_4k();

    public:
        float dlugosc, szerokosc, bok_3, bok_4;

        float pole;

        Czworokat(float=0, float=0, float=0, float=0, float=0,float=0,float=0);


};
