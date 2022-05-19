#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>

#pragma once
#include "czworokat.h"
#include "figurygeomertryczne.h"

using namespace std;

class Kwadrat: public Czworokat{
    private:
        float przekatna;

    protected:
        void kw_pole();

    public:
        Kwadrat(float=0, float=0, float=0, float=0, float=0,float=0,float=0,float=0);

        void kw_ustaw();


};
