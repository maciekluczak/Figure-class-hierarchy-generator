#include <iostream>
#include <math.h>
#include <fstream>

#pragma once
#include "konsola.h"
using namespace std;


void Konsola::start() {
    cout << "Dostepne komendy:\n"
                 " > CD [nazwa wezla] - zmiana wezla\n"
                 " > MO [nazwa] - utworzenie obiektu dla obecnego liscia\n"
                 " > DO [nazwa] - usuniecie obiektu z obecnego liscia\n"
                 " > MDO [nazwa] - modyfikacja obiektu z obecnego liscia\n"
                 " > SHOW [nazwa] - wyswietla szczegolowe informacje dla obiektu o podanej nazwie\n"
                 " > DIR - wypisuje wszystkie elementy\n"
                 " > SAVE - zapisywanie danych do pliku\n"
                 " > READ - wczytywanie danych z pliku\n"
                 " > TREE - wyswietlanei struktury drzewa\n"
                 " > EXIT  - wyjscie z programu" << endl;

    while (option != "EXIT") {
        cout<< endl;
        cout << "Aktualny wezel: "  << wezel<< endl;

        cout << "Podaj polecenie:" << endl;
        cout << "> ";
        cin >> option;

        if (option=="CD"){
            cd();}
        else if (option == "TREE") {
            tree();}
         else if (option == "MO") {
            mo();}

         else if (option == "DO") {
            del();}

         else if (option == "MDO") {
            mdo();}

        else if (option == "DIR") {
            dir();}

        else if (option == "SHOW") {
            show_inf();}

         else if (option == "SAVE") {
            save();
        } else if (option == "READ") {
            read();
        }
         else if (option == "EXIT") {
            cout<<"Koniec pracy programu "<<endl;
        }
         else if (!option.empty()) {

            cout << "Nieznana komenda." << endl;
        };
    }
}
void Konsola:: cd(){
            cin >> argument;

            if(argument== "FiguryGeometryczne"){
                wezel=argument;
            }
            else if(argument== "Punkt"){
                wezel=argument;
            }
            else if(argument== "Trojkat"){
                wezel=argument;
            }
            else if(argument== "Czworokat"){
                wezel=argument;
            }
            else if(argument== "TrojkatRownoboczny"){
                wezel=argument;
            }
            else if(argument== "InnyTrojkat"){
                wezel=argument;
            }
            else if(argument== "OstroslupTrojkatnyProsty"){
                wezel=argument;
            }
            else if(argument== "Kwadrat"){
                wezel=argument;
            }
            else if(argument== "InnyCzworokat"){
                wezel=argument;
            }
            else if(argument== "OstroslupCzworokatnyProsty"){
                wezel=argument;
            }
            else{
                cout<<"Podano zly wezel!"<<endl;
            }
}
void Konsola::mo(){
            cin >> argument;

            if(wezel=="TrojkatRownoboczny"){
            Tr_Rownoboczny t;
            t.nazwa=argument;
            TrRb.push_back(t);
            cout<< "Obiekt "<< argument<< " zostal utworzony!"<<endl;
            }

            else if(wezel=="OstroslupCzworokatnyProsty"){
            Ostr_czwor_pr os4;
            os4.nazwa=argument;
            Ost4.push_back(os4);
            cout<< "Obiekt "<< argument<< " zostal utworzony!"<<endl;
}

            else if(wezel=="OstroslupTrojkatnyProsty"){
            Ostr_tr_pr os3;
            os3.nazwa=argument;
            Ost3.push_back(os3);
            cout<< "Obiekt "<< argument<< " zostal utworzony!"<<endl;
}
            else if(wezel=="InnyCzworokat"){
            Inne_czwor inne4;
            inne4.nazwa=argument;
            In4.push_back(inne4);
            cout<< "Obiekt "<< argument<< " zostal utworzony!"<<endl;}

            else if(wezel=="InnyTrojkat"){
            Inne_tr inne3;
            inne3.nazwa=argument;
            In3.push_back(inne3);
            cout<< "Obiekt "<< argument<< " zostal utworzony!"<<endl;
}}

void Konsola::del(){
            cin >> argument;

            if(wezel=="TrojkatRownoboczny"){

                for(int i = 0;i<TrRb.size();i++) {
                if (TrRb[i].nazwa==argument){
                    TrRb.erase(TrRb.begin()+i);}
                    }}

            else if(wezel=="OstroslupCzworokatnyProsty"){

                for(int i = 0;i<Ost4.size();i++) {
                if (Ost4[i].nazwa==argument){
                   Ost4.erase(Ost4.begin()+i);}

             }}


            else if(wezel=="OstroslupTrojkatnyProsty"){

                for(int i = 0;i<Ost3.size();i++) {
                if (Ost3[i].nazwa==argument){
                   Ost3.erase(Ost3.begin()+i);}

            }}


            else if(wezel=="InnyCzworokat"){

                for(int i = 0;i<In4.size();i++) {
                if (In4[i].nazwa==argument){
                   In4.erase(In4.begin()+i);}

             }}

             else if(wezel=="InnyTrojkat"){

                for(int i = 0;i<In3.size();i++) {
                if (In3[i].nazwa==argument){
                   In3.erase(In3.begin()+i);}

             }}
cout<< endl;
}



void Konsola::tree() {
    cout <<      "                             FiguryGeometryczne\n"
                 "              ______________/          |         \\\n"
                 "             /                     Trojkat          Czworokat\n"
                 "          Punkt                   /    |   \\             |   \\\n"
                 "            \\   \\   TrojkatRownoboczny | InnyTrojkat     |     InnyCzworokat\n"
                 "             \\   \\                     |               Kwadrat\n"
                 "              \\   \\____                |                 |      \n"
                 "               \\       \\_______________|_________        |\n"
                 "                \\__________            |         \\       |\n"
                 "                            \\______    |          \\ __   |\n"
                 "                                   \\   |              \\  |\n"
                 "                OstroslupTrojkatnyProsty    OstroslupCzworokatnyProsty\n\n";
}


void Konsola:: dir(){

            if(wezel== "FiguryGeometryczne"){
                cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;
                 for(int i = 0;i<TrRb.size();i++) {
                cout<< TrRb[i].nazwa<< "; ";}

                for(int i = 0;i<Ost4.size();i++) {
                cout<< Ost4[i].nazwa<< "; ";}

                for(int i = 0;i<Ost3.size();i++) {
                cout<< Ost3[i].nazwa<< "; ";}

                for(int i = 0;i<In4.size();i++) {
                cout<< In4[i].nazwa<< "; ";}

                for(int i = 0;i<In3.size();i++) {
                cout<< In3[i].nazwa<< "; ";}

            }
            else if(wezel== "Punkt"){
                 cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;
                 for(int i = 0;i<Ost4.size();i++) {
                cout<< Ost4[i].nazwa<< "; ";}
                for(int i = 0;i<Ost3.size();i++) {
                cout<< Ost3[i].nazwa<< "; ";}

            }
            else if(wezel== "Trojkat"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;

                     for(int i = 0;i<TrRb.size();i++) {
                cout<< TrRb[i].nazwa<< "; ";}

                      for(int i = 0;i<Ost3.size();i++) {
                cout<< Ost3[i].nazwa<< "; ";}

                    for(int i = 0;i<In3.size();i++) {
                cout<< In3[i].nazwa<< "; ";}


            }
            else if(wezel== "Czworokat"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;

                     for(int i = 0;i<Ost4.size();i++) {
                cout<< Ost4[i].nazwa<< "; ";}

                for(int i = 0;i<In4.size();i++) {
                cout<< In4[i].nazwa<< "; ";}

            }
            else if(wezel== "TrojkatRownoboczny"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;
                     for(int i = 0;i<TrRb.size();i++) {
                cout<< TrRb[i].nazwa<< "; ";}


            }
            else if(wezel== "InnyTrojkat"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;
                     for(int i = 0;i<In3.size();i++) {
                cout<< In3[i].nazwa<< "; ";}

            }
            else if(wezel== "OstroslupTrojkatnyProsty"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;
                     for(int i = 0;i<Ost3.size();i++) {
                cout<< Ost3[i].nazwa<< "; ";}


            }
            else if(wezel== "Kwadrat"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;

                     for(int i = 0;i<Ost4.size();i++) {
                cout<< Ost4[i].nazwa<< "; ";}

            }
            else if(wezel== "InnyCzworokat"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;

                     for(int i = 0;i<In4.size();i++) {
                cout<< In4[i].nazwa<< "; ";}

            }
            else if(wezel== "OstroslupCzworokatnyProsty"){
                     cout<< "Obiekty widoczne z poziomu "<< wezel<<endl;

                     for(int i = 0;i<Ost4.size();i++) {
                cout<< Ost4[i].nazwa<< "; ";}

            }
            else{
                cout<<"Wybierz wezel!"<<endl;
            }
}

void Konsola::mdo(){
            cin >> argument;

            if(wezel=="TrojkatRownoboczny"){

                for(int i = 0;i<TrRb.size();i++) {
                if (TrRb[i].nazwa==argument){
                    cout<< endl;
                    cout<< TrRb[i].nazwa <<"- modyfikacja: "<<endl;
                    ++TrRb[i];
                    TrRb[i].tr_rb_ustaw();
                    TrRb[i].ustaw_pozycje();

                    }

             }}

            else if(wezel=="OstroslupCzworokatnyProsty"){

                for(int i = 0;i<Ost4.size();i++) {
                if (Ost4[i].nazwa==argument){
                    cout<< Ost4[i].nazwa <<"- modyfikacja: "<<endl;
                   ++Ost4[i];
                   Ost4[i].ostr_4_ustaw();
                   Ost4[i].ustaw_pozycje();}

            }}

            else if(wezel=="OstroslupTrojkatnyProsty"){

                for(int i = 0;i<Ost3.size();i++) {
                if (Ost3[i].nazwa==argument){
                    cout<< Ost3[i].nazwa <<"- modyfikacja: "<<endl;
                  ++Ost3[i];
                   Ost3[i].ostr_3_ustaw();
                   Ost3[i].ustaw_pozycje();}
            }}

            else if(wezel=="InnyCzworokat"){

                for(int i = 0;i<In4.size();i++) {
                if (In4[i].nazwa==argument){
                    cout<<In4[i].nazwa <<"- modyfikacja: "<<endl;
                 ++In4[i];
                   In4[i].inne_4_ustaw();
                   In4[i].ustaw_pozycje();}
            }}

             else if(wezel=="InnyTrojkat"){

                for(int i = 0;i<In3.size();i++) {
                if (In3[i].nazwa==argument){
                    cout<<In3[i].nazwa <<"- modyfikacja: "<<endl;
                    ++In3[i];
                   In3[i].inne_3_ustaw();
                   In3[i].ustaw_pozycje();}
            }}}


void Konsola::show_inf(){
            cin >> argument;

            if(wezel=="TrojkatRownoboczny" || wezel=="Trojkat" || wezel=="FiguryGeometryczne" ){

                for(int i = 0;i<TrRb.size();i++) {
                if (TrRb[i].nazwa==argument){
                    cout<< endl;
                    cout<< TrRb[i].nazwa <<"- Informacje: "<<endl;
                    TrRb[i].tr_rb_show();
                    TrRb[i].odleglosc_uklad();

                    }

             }}

            if(wezel=="OstroslupCzworokatnyProsty" || wezel=="Kwadrat" || wezel=="Czworokat" || wezel=="Punkt" || wezel=="FiguryGeometryczne"){

                for(int i = 0;i<Ost4.size();i++) {
                if (Ost4[i].nazwa==argument){
                    cout<< endl;
                    cout<< Ost4[i].nazwa <<"- Informacje: "<<endl;
                   Ost4[i].ostr_4_show();
                    Ost4[i].odleglosc_uklad();
            }}}

            if(wezel=="OstroslupTrojkatnyProsty" || wezel=="Punkt" || wezel=="Trojkat" || wezel=="FiguryGeometryczne"){

                for(int i = 0;i<Ost3.size();i++) {
                if (Ost3[i].nazwa==argument){
                    cout<< endl;
                    cout<< Ost3[i].nazwa <<"- Informacje: "<<endl;
                   Ost3[i].ostr_3_show();
                   Ost3[i].odleglosc_uklad();}
            }}

            if(wezel=="InnyCzworokat" ||  wezel=="Czworokat" || wezel=="FiguryGeometryczne"){

                for(int i = 0;i<In4.size();i++) {
                if (In4[i].nazwa==argument){
                    cout<< endl;
                    cout<< In4[i].nazwa <<"- Informacje: "<<endl;
                   In4[i].inne_4_show();
                   In4[i].odleglosc_uklad();}
            }}

            if(wezel=="InnyTrojkat" || wezel=="Trojkat" || wezel=="FiguryGeometryczne"){

                for(int i = 0;i<In3.size();i++) {
                if (In3[i].nazwa==argument){
                    cout<< endl;
                    cout<< In3[i].nazwa <<"- Informacje: "<<endl;
                   In3[i].inne_3_show();
                   In3[i].odleglosc_uklad();}
            }}
cout<< endl;
}
//========================================SAVE/READ======================================================
void Konsola:: save(){



            if(wezel== "FiguryGeometryczne"){

                ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {
                for(int i = 0;i<TrRb.size();i++) {
                file1<<"id "<<"Tr_Rownoboczny"<<endl;
                file1<<"nazwa "<<TrRb[i].nazwa<<endl;
                file1<<"kolor "<<TrRb[i].kolor<<endl;
                file1<<"podstawa "<<TrRb[i].podstawa<<endl;
                file1<<"x "<<TrRb[i].pkt_x<<endl;
                file1<<"y "<<TrRb[i].pkt_y<<endl;
                file1<<"z "<<TrRb[i].pkt_z<<endl;

                cout<<"zapisano: "<<TrRb[i].nazwa<<endl;
                }


                for(int i = 0;i<Ost4.size();i++) {
                file1<<"id "<<"Ostr_czwor_pr"<<endl;
                file1<<"nazwa "<<Ost4[i].nazwa<<endl;
                file1<<"kolor "<<Ost4[i].kolor<<endl;
                file1<<"dlugosc "<<Ost4[i].dlugosc<<endl;
                file1<<"wysokosc "<<Ost4[i].ostr_4_h<<endl;
                file1<<"x "<<Ost4[i].pkt_x<<endl;
                file1<<"y "<<Ost4[i].pkt_y<<endl;
                file1<<"z "<<Ost4[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost4[i].nazwa<<endl;}


                for(int i = 0;i<Ost3.size();i++) {
                file1<<"id "<<"Ostr_tr_pr"<<endl;
                file1<<"nazwa "<<Ost3[i].nazwa<<endl;
                file1<<"kolor "<<Ost3[i].kolor<<endl;
                file1<<"podstawa "<<Ost3[i].podstawa<<endl;
                file1<<"wysokosc "<<Ost3[i].ostr_h<<endl;
                file1<<"x "<<Ost3[i].pkt_x<<endl;
                file1<<"y "<<Ost3[i].pkt_y<<endl;
                file1<<"z "<<Ost3[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost3[i].nazwa<<endl;
               }

                for(int i = 0;i<In4.size();i++) {
                file1<<"id "<<"Inne_czwor"<<endl;
                file1<<"nazwa "<<In4[i].nazwa<<endl;
                file1<<"kolor "<<In4[i].kolor<<endl;
                file1<<"dlugosc "<<In4[i].dlugosc<<endl;
                file1<<"szerokosc "<<In4[i].szerokosc<<endl;
                file1<<"bok_3 "<<In4[i].bok_3<<endl;
                file1<<"bok_4 "<<In4[i].bok_4<<endl;
                file1<<"x "<<In4[i].pkt_x<<endl;
                file1<<"y "<<In4[i].pkt_y<<endl;
                file1<<"z "<<In4[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In4[i].nazwa<<endl;
                }

                for(int i = 0;i<In3.size();i++) {
                file1<<"id "<<"Inne_tr"<<endl;
                file1<<"nazwa "<<In3[i].nazwa<<endl;
                file1<<"kolor "<<In3[i].kolor<<endl;
                file1<<"podstawa "<<In3[i].podstawa<<endl;
                file1<<"bok_b "<<In3[i].bok_b<<endl;
                file1<<"bok_c "<<In3[i].bok_c<<endl;
                file1<<"x "<<In3[i].pkt_x<<endl;
                file1<<"y "<<In3[i].pkt_y<<endl;
                file1<<"z "<<In3[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In3[i].nazwa<<endl;
                 }



            }
            }
            else if(wezel== "Punkt"){


                ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {


                for(int i = 0;i<Ost4.size();i++) {
                file1<<"id "<<"Ostr_czwor_pr"<<endl;
                file1<<"nazwa "<<Ost4[i].nazwa<<endl;
                file1<<"kolor "<<Ost4[i].kolor<<endl;
                file1<<"dlugosc "<<Ost4[i].dlugosc<<endl;
                file1<<"wysokosc "<<Ost4[i].ostr_4_h<<endl;
                file1<<"x "<<Ost4[i].pkt_x<<endl;
                file1<<"y "<<Ost4[i].pkt_y<<endl;
                file1<<"z "<<Ost4[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost4[i].nazwa<<endl;}


                for(int i = 0;i<Ost3.size();i++) {
                file1<<"id "<<"Ostr_tr_pr"<<endl;
                file1<<"nazwa "<<Ost3[i].nazwa<<endl;
                file1<<"kolor "<<Ost3[i].kolor<<endl;
                file1<<"podstawa "<<Ost3[i].podstawa<<endl;
                file1<<"wysokosc "<<Ost3[i].ostr_h<<endl;
                file1<<"x "<<Ost3[i].pkt_x<<endl;
                file1<<"y "<<Ost3[i].pkt_y<<endl;
                file1<<"z "<<Ost3[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost3[i].nazwa<<endl;
               }


            }
            }
            else if(wezel== "Trojkat"){


                ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {
                for(int i = 0;i<TrRb.size();i++) {
                file1<<"id "<<"Tr_Rownoboczny"<<endl;
                file1<<"nazwa "<<TrRb[i].nazwa<<endl;
                file1<<"kolor "<<TrRb[i].kolor<<endl;
                file1<<"podstawa "<<TrRb[i].podstawa<<endl;
                file1<<"x "<<TrRb[i].pkt_x<<endl;
                file1<<"y "<<TrRb[i].pkt_y<<endl;
                file1<<"z "<<TrRb[i].pkt_z<<endl;

                cout<<"zapisano: "<<TrRb[i].nazwa<<endl;
                }



                for(int i = 0;i<Ost3.size();i++) {
                file1<<"id "<<"Ostr_tr_pr"<<endl;
                file1<<"nazwa "<<Ost3[i].nazwa<<endl;
                file1<<"kolor "<<Ost3[i].kolor<<endl;
                file1<<"podstawa "<<Ost3[i].podstawa<<endl;
                file1<<"wysokosc "<<Ost3[i].ostr_h<<endl;
                file1<<"x "<<Ost3[i].pkt_x<<endl;
                file1<<"y "<<Ost3[i].pkt_y<<endl;
                file1<<"z "<<Ost3[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost3[i].nazwa<<endl;
               }


                for(int i = 0;i<In3.size();i++) {
                file1<<"id "<<"Inne_tr"<<endl;
                file1<<"nazwa "<<In3[i].nazwa<<endl;
                file1<<"kolor "<<In3[i].kolor<<endl;
                file1<<"podstawa "<<In3[i].podstawa<<endl;
                file1<<"bok_b "<<In3[i].bok_b<<endl;
                file1<<"bok_c "<<In3[i].bok_c<<endl;
                file1<<"x "<<In3[i].pkt_x<<endl;
                file1<<"y "<<In3[i].pkt_y<<endl;
                file1<<"z "<<In3[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In3[i].nazwa<<endl;
                 }



            }
            }

            else if(wezel== "Czworokat"){

                ofstream file1("FiguryGeometryczne.txt");

                 if(file1.is_open())
                {

                for(int i = 0;i<Ost4.size();i++) {
                file1<<"id "<<"Ostr_czwor_pr"<<endl;
                file1<<"nazwa "<<Ost4[i].nazwa<<endl;
                file1<<"kolor "<<Ost4[i].kolor<<endl;
                file1<<"dlugosc "<<Ost4[i].dlugosc<<endl;
                file1<<"wysokosc "<<Ost4[i].ostr_4_h<<endl;
                file1<<"x "<<Ost4[i].pkt_x<<endl;
                file1<<"y "<<Ost4[i].pkt_y<<endl;
                file1<<"z "<<Ost4[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost4[i].nazwa<<endl;}


                for(int i = 0;i<In4.size();i++) {
                file1<<"id "<<"Inne_czwor"<<endl;
                file1<<"nazwa "<<In4[i].nazwa<<endl;
                file1<<"kolor "<<In4[i].kolor<<endl;
                file1<<"dlugosc "<<In4[i].dlugosc<<endl;
                file1<<"szerokosc "<<In4[i].szerokosc<<endl;
                file1<<"bok_3 "<<In4[i].bok_3<<endl;
                file1<<"bok_4 "<<In4[i].bok_4<<endl;
                file1<<"x "<<In4[i].pkt_x<<endl;
                file1<<"y "<<In4[i].pkt_y<<endl;
                file1<<"z "<<In4[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In4[i].nazwa<<endl;
                }


            }
            }

            else if(wezel== "TrojkatRownoboczny"){

                    ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {
                for(int i = 0;i<TrRb.size();i++) {
                file1<<"id "<<"Tr_Rownoboczny"<<endl;
                file1<<"nazwa "<<TrRb[i].nazwa<<endl;
                file1<<"kolor "<<TrRb[i].kolor<<endl;
                file1<<"podstawa "<<TrRb[i].podstawa<<endl;
                file1<<"x "<<TrRb[i].pkt_x<<endl;
                file1<<"y "<<TrRb[i].pkt_y<<endl;
                file1<<"z "<<TrRb[i].pkt_z<<endl;

                cout<<"zapisano: "<<TrRb[i].nazwa<<endl;
                }


            }
            }

            else if(wezel== "InnyTrojkat"){
                ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {

                for(int i = 0;i<In3.size();i++) {
                file1<<"id "<<"Inne_tr"<<endl;
                file1<<"nazwa "<<In3[i].nazwa<<endl;
                file1<<"kolor "<<In3[i].kolor<<endl;
                file1<<"podstawa "<<In3[i].podstawa<<endl;
                file1<<"bok_b "<<In3[i].bok_b<<endl;
                file1<<"bok_c "<<In3[i].bok_c<<endl;
                file1<<"x "<<In3[i].pkt_x<<endl;
                file1<<"y "<<In3[i].pkt_y<<endl;
                file1<<"z "<<In3[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In3[i].nazwa<<endl;
                 }



            }
            }
            else if(wezel== "OstroslupTrojkatnyProsty"){
                ofstream file1("FiguryGeometryczne.txt");

                if(file1.is_open())
                {

                for(int i = 0;i<Ost3.size();i++) {
                file1<<"id "<<"Ostr_tr_pr"<<endl;
                file1<<"nazwa "<<Ost3[i].nazwa<<endl;
                file1<<"kolor "<<Ost3[i].kolor<<endl;
                file1<<"podstawa "<<Ost3[i].podstawa<<endl;
                file1<<"wysokosc "<<Ost3[i].ostr_h<<endl;
                file1<<"x "<<Ost3[i].pkt_x<<endl;
                file1<<"y "<<Ost3[i].pkt_y<<endl;
                file1<<"z "<<Ost3[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost3[i].nazwa<<endl;
               }



            }
            }

            else if(wezel== "Kwadrat"){
                ofstream file1("FiguryGeometryczne.txt");


                if(file1.is_open())
                {

                for(int i = 0;i<Ost4.size();i++) {
                file1<<"id "<<"Ostr_czwor_pr"<<endl;
                file1<<"nazwa "<<Ost4[i].nazwa<<endl;
                file1<<"kolor "<<Ost4[i].kolor<<endl;
                file1<<"dlugosc "<<Ost4[i].dlugosc<<endl;
                file1<<"wysokosc "<<Ost4[i].ostr_4_h<<endl;
                file1<<"x "<<Ost4[i].pkt_x<<endl;
                file1<<"y "<<Ost4[i].pkt_y<<endl;
                file1<<"z "<<Ost4[i].pkt_z<<endl;

                cout<<"zapisano: "<<Ost4[i].nazwa<<endl;}

            }
            }

            else if(wezel== "InnyCzworokat"){
                ofstream file1("FiguryGeometryczne.txt");


                if(file1.is_open())
                {

                for(int i = 0;i<In4.size();i++) {
                file1<<"id "<<"Inne_czwor"<<endl;
                file1<<"nazwa "<<In4[i].nazwa<<endl;
                file1<<"kolor "<<In4[i].kolor<<endl;
                file1<<"dlugosc "<<In4[i].dlugosc<<endl;
                file1<<"szerokosc "<<In4[i].szerokosc<<endl;
                file1<<"bok_3 "<<In4[i].bok_3<<endl;
                file1<<"bok_4 "<<In4[i].bok_4<<endl;
                file1<<"x "<<In4[i].pkt_x<<endl;
                file1<<"y "<<In4[i].pkt_y<<endl;
                file1<<"z "<<In4[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In4[i].nazwa<<endl;
                }


            }
            }
            else if(wezel== "OstroslupCzworokatnyProsty"){
                ofstream file1("FiguryGeometryczne.txt");


                if(file1.is_open())
                {

                for(int i = 0;i<In4.size();i++) {
                file1<<"id "<<"Inne_czwor"<<endl;
                file1<<"nazwa "<<In4[i].nazwa<<endl;
                file1<<"kolor "<<In4[i].kolor<<endl;
                file1<<"dlugosc "<<In4[i].dlugosc<<endl;
                file1<<"szerokosc "<<In4[i].szerokosc<<endl;
                file1<<"bok_3 "<<In4[i].bok_3<<endl;
                file1<<"bok_4 "<<In4[i].bok_4<<endl;
                file1<<"x "<<In4[i].pkt_x<<endl;
                file1<<"y "<<In4[i].pkt_y<<endl;
                file1<<"z "<<In4[i].pkt_z<<endl;

                 cout<<"zapisano: "<<In4[i].nazwa<<endl;
                }


            }
            }

            else{
                cout<<"Wybierz wezel!"<<endl;
            }
}

void Konsola:: read(){

                ifstream file2("FiguryGeometryczne.txt");
              string a, b;
              int c;
while (file2 >> a >> b)
{

    if(a=="id"){
            if (b=="Tr_Rownoboczny"){

            Tr_Rownoboczny t;
            file2>>a>>b;
            t.nazwa=b;
            file2>>a>>b;
            t.kolor=b;
            file2>>a>>c;
            t.podstawa=c;
            t.tr_rb_set();
            file2>>a>>c;
            t.pkt_x=c;
            file2>>a>>c;
            t.pkt_y=c;
            file2>>a>>c;
            t.pkt_z=c;
            TrRb.push_back(t);
            cout<< "Dodano: "<< t.nazwa<<endl;}

            if (b=="Inne_tr"){

            Inne_tr t;
            file2>>a>>b;
            t.nazwa=b;
            file2>>a>>b;
            t.kolor=b;
            file2>>a>>c;
            t.podstawa=c;
            file2>>a>>c;
            t.bok_b=c;
            file2>>a>>c;
            t.bok_c=c;
            file2>>a>>c;
            t.pkt_x=c;
            file2>>a>>c;
            t.pkt_y=c;
            file2>>a>>c;
            t.pkt_z=c;
            In3.push_back(t);
            cout<< "Dodano: "<< t.nazwa<<endl;}

            if (b=="Ostr_czwor_pr"){

            Ostr_czwor_pr t;
            file2>>a>>b;
            t.nazwa=b;
            file2>>a>>b;
            t.kolor=b;
            file2>>a>>c;
            t.dlugosc=c;
            file2>>a>>c;
            t.ostr_4_h=c;

            file2>>a>>c;
            t.pkt_x=c;
            file2>>a>>c;
            t.pkt_y=c;
            file2>>a>>c;
            t.pkt_z=c;
            Ost4.push_back(t);
            cout<< "Dodano: "<< t.nazwa<<endl;}

            if (b=="Ostr_tr_pr"){

          Ostr_tr_pr t;
            file2>>a>>b;
            t.nazwa=b;
            file2>>a>>b;
            t.kolor=b;
            file2>>a>>c;
            t.podstawa=c;
            file2>>a>>c;
            t.ostr_h=c;

            file2>>a>>c;
            t.pkt_x=c;
            file2>>a>>c;
            t.pkt_y=c;
            file2>>a>>c;
            t.pkt_z=c;
            Ost3.push_back(t);
            cout<< "Dodano: "<< t.nazwa<<endl;}


             if (b=="Inne_czwor"){

            Inne_czwor t;
            file2>>a>>b;
            t.nazwa=b;
            file2>>a>>b;
            t.kolor=b;
            file2>>a>>c;
            t.dlugosc=c;
            file2>>a>>c;
            t.szerokosc=c;
            file2>>a>>c;
            t.bok_3=c;
            file2>>a>>c;
            t.bok_4=c;
            file2>>a>>c;
            t.pkt_x=c;
            file2>>a>>c;
            t.pkt_y=c;
            file2>>a>>c;
            t.pkt_z=c;
            In4.push_back(t);
            cout<< "Dodano: "<< t.nazwa<<endl;}





    }
}file2.close();

        }
