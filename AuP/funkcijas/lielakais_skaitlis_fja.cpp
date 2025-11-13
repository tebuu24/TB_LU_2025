#include <iostream>
using namespace std;

/******
c++ formula nevar izvadīt 2 rezultātus
*******/

/// AuPLa0401.cpp
/****************************************************************************
AuPLa0503. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību.
Risinājumā jāizmanto funkcija lielakais(a, b), kas atgriež kā rezultātu lielāko no dotajiem veselajiem skaitļiem a un b.
Funkcijas lielakais(a, b) realizācijā jāizmanto nosacījuma funktors (conditional operator).
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
Izveidot arī veselu skaitļu a un b funkciju lielmaz(a,b), kas ieraksta iekš a lielāko no a un b, un ieraksta iekš b mazāko no a un b.
*****************************************************************************/
/// Autors: Terēze Bogdane. Izmantots risinājums no AuP0501.cpp
/// Programma izveidota: 02.10.2025.



/**
int lielakais(int a, int b);
Funkcija lielakais(a, b) -
 atgriež kā rezultātu lielāko no dotajiem veselajiem skaitļiem a un b.
**/
int lielakais(int a, int b){
    return (a>b ? a: b);
}


/**
void lielmaz(int &a, int &b);
Funkcija lielmaz(a, b) -
 ieraksta veselu skaitļu argumentos iekš a lielāko no a un b, un ieraksta iekš b mazāko no a un b.
**/
void lielmaz(int &a, int &b){
    int liel = (a>b ? a : b));
    int maz = (a<b ? a : b);
    liel = a;
    maz = b;
}


int main(){
    int ok;
    do{
        int n;
        int sk; //ievadītais skaitlis
        int liel; //pašlaik lielākais ievadītais skaitlis

        /// Pieprasa ievadīt naturālu skaitli n n>=1,
        /// Nodrošina, ka skaitlis n ir korekts (n>=1)
        do{
          cout<<"Ievadiet skaitļu skaitu N, N>=1: "<<endl;
          cin >> n;
          if(n<1) cout<<"Kļūdaina vērtība. Jāievada N, N>=1."<<endl;
        }while(n<1);

        //for cikls kas prasa ievadīt tekoši skaitļus līdz sasniedz n
        //katra iterācija izmanto funkciju lielakais ar sk un liel
        //



        // Paziņo rezultātu liel
        cout<<"Lielākais skaitlis: "<<sk<<endl;

        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}


/************  Testu plāns *****************************
 sk   skaitļi       paredzamais rezultāts
 929   9            2
 5     3            0
 1      10          Kļūdaina vērtība. Jāievada cipars, 0<=cipars<=9
 1     -1           Kļūdaina vērtība. Jāievada cipars, 0<=cipars<=9
 ******************************************************/







