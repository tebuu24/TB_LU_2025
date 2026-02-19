/***
PiPLa0102. Pārveidot programmu txt6get.cpp,
lai tiktu aprēķināti dotajā failā esošo simbolu biežumi. Izdrukāt biežumus.
Dati no faila jānolasa pa vienai rindiņai.
Nedrīkst dublēt visa faila saturu operatīvajā atmiņā.

getline funkcija lai lasītu pa vienai rindiņai, viegla pārveidošana
ciklā ar get būs getline

biežumi
-izveido masīvu ar 256 elementiem, kur visur ir 0, katram simbolam ir kods robežā 0-255
kad iegūst rindiņu, paņem simbolu un tā kodu izmantos kā indeksu, indeksa vērtību palielina par 1

izvada tikai tos simbolus, kuriem vērtība ir lielāka par 0

***/


// txt6get.cpp
#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    fstream fin;
    string rin;
    int biezumi[256] = {0}; //visām vērtībām jābūt 0
    //for(int i=0; i<256; i++) cout<<biezumi[i]; //masīva vērtību pārbaude

    fin.open ("in0101.txt", ios::in); //izmantosim in0101.txt
    getline(fin, rin);

    while (fin)
    {
        for(int i=0; i<rin.length(); i++){
            //biezumi ir masīvs, kur gribam mainīt vienu elementu, bet pats elements ir nolasītās rindiņas masīva elements - simbols
            //pie elementa indeksam var tikt ar [], bet string var tikt klāt arī ar at (labāks)
            biezumi[rin[i]]++; //nepieciešams katram simbolam -> for cikls
        }
        getline(fin, rin);
    };


    //latviešu burti, piemēram, ņ, iespējams, tiek ievadīti ar negatīvu indeksu, nozīmē, ka tiem biežuma aprēķins pat nestrādā un tāpēc netiek izvadīts
    // rin.at(indekss)

    fin.close ();
    for(int i=0; i<256; i++){
        if(!(biezumi[i]==0)) cout<<char(i)<<"=>"<<biezumi[i]<<' '; //jāizvada arī simbols ar char(i)
    }
    return 0;
}
