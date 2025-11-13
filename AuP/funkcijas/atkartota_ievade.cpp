#include <iostream>
using namespace std;

/// AuPLa0801.cpp
/****************************************************************************
AuPLa0801. Sastādīt C++ funkciju getNatural(), kas atgriež kā rezultātu korektu naturālu skaitli.
Skaitļa vērtību pieprasa ievadīt lietotājam tik ilgi, kamēr ievada korektu vērtību – vērtība lielāka par nulli.
Sastādīt arī programmu, kurā tiek izsaukta funkcija getNatural.
*****************************************************************************/
/// Autors: Terēze Bogdane
/// Programma izveidota: 23.10.2025.


/**
int getNatural();
Funkcija getNatural() -
 atgriež kā rezultātu korektu naturālu skaitli, kuru pieprasa ievadīt lietotājam tik ilgi, kamēr ievada veselu skaitli lielāku par 0.
**/

int getNatural() {
    int n;
    do{
        cout<<"Ievadiet naturālu skaitli N, N>=1: "<<endl;
        cin >> n;
        if(n<1) cout<<"Kļūdaina vērtība. Jāievada N, N>=1."<<endl;
    } while(n<1);
    return n;
}

int main () {
    int ok = 1;
    while (ok == 1) {

        cout<< "Naturāls skaitlis: " << getNatural() <<endl;

        // lietotājam piedāvā programmas atkārtotu izpildi
        cout << "Vai turpināt (1) vai beigt (0)? ";
        cin >> ok;
    }
    return 0;

}



/**************** Testu plāns ******************
n          paredzamais rezultāts        atbilst

4                  4                      +

-4         Kļūdaina vērtība.              +
           Jāievada N, N>=1.

0          Kļūdaina vērtība.              +
           Jāievada N, N>=1.
************************************************
