#include <iostream>
#include <math.h>
#include <vector>
#include <cstdio>
#pragma once
#include "figurygeomertryczne.h"
#include "ostroslupczworokatny.h"
#include "ostrosluptrojkatny.h"
#include "trojkatrownoboczny.h"
#include "inny.trojkat.h"
#include "innyczworokat.h"
using namespace std;

class Konsola{
private:
    string option,argument;
    string wezel;
    void tree();
    void cd();
    void mo();
    void del();
    void dir();
    void mdo();
    void show_inf();
    void save();
    void read();
protected:
    vector <Tr_Rownoboczny> TrRb;
    vector <Ostr_czwor_pr> Ost4;
    vector <Ostr_tr_pr> Ost3;
    vector <Inne_czwor> In4;
    vector <Inne_tr> In3;

public:
    void start();

};
