#include <iostream>
using namespace std;

/******
c++ formula nevar izvadīt 2 rezultātus
*******/

/// AuPLa0401.cpp
/****************************************************************************
AuPLa0501. Sastādīt C++ programmu, kas dotam naturālam skaitlim nosaka dota cipara skaitu pierakstā.
Risinājuma iegūšanai sastādīt funkciju, kura naturālam skaitlim nosaka dota cipara skaitu pierakstā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
*****************************************************************************/
/// Autors: Terēze Bogdane. Izmantots risinājums no AuP0401.cpp no e-studijām
/// Programma izveidota: 02.10.2025.



/**
int dotCipSkaits(int n, int c);
Funkcija dotCipSkaits(n, c) -
 atgriež kā rezultātu cipara c skaitu naturāla skaitļa n pierakstā.
**/
int dotCipSkaits(int n, int c){
    int c_skaits =0;  //pašlaik atrastais cipara c skaits naturālā skaitlī n
    do{
        //noskaidrojam pašlaik pēdējo ciparu ar n%10
        //vai sakrīt ar padoto ciparu
        if ((n%10) == c) c_skaits++;
        //atšķeļ no n pēdējo ciparu, to dalot ar 10
        n = n/10;
    } while (n>0);
    return c_skaits;
}



int main(){
    int ok;
    do{
        int sk; //ievadītais skaitlis
        int cip; //ievadītais cipars
        int cs; // cipara cip skaits skaitlī sk

        /// Pieprasa ievadīt skaitļu skaitu n,
        /// Nodrošina, ka skaitlis ir korekts (sk>=1)
        do{
          cout<<"Ievadiet naturālu skaitli, skaitlis>=1: "<<endl;
          cin >> sk;
          if(sk<1) cout<<"Kļūdaina vērtība. Jāievada skaitlis, skaitlis>=1."<<endl;
        } while(sk == 1);

        do{
          cout<<"Ievadiet ciparu no 1-9: "<<endl;
          cin >> cip;
          if(cip<0 or cip >9) cout<<"Kļūdaina vērtība. Jāievada cipars no 0 līdz 9."<<endl;
        } while(cip<0 or cip>9);


        //cip = 9; //uzskata, ka ir ievadīts cipars 9
        /// Saņem korektu skaitļu skaitli sk,sk>=1 un korektu ciparu cip, 0<=cip<=9
        /// nosaka dotā cipara cip skaitu sk pierakstā ar funkciju dotCipSkaits(sk, cip)
        cs = dotCipSkaits(sk, cip);



        /// Paziņo rezultātu cs
        cout<<"Dota cipara skaits: "<<cs<<endl;

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







