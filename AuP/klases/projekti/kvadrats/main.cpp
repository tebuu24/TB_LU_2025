/***
AuPLa1401. Izveidot C++ klasi Kvadrats, izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos.
Klases deklarāciju obligāti novietot atsevišķā hedera failā (Kvadrats.h). Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (Kvadrats.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klasei Kvadrats jāapraksta ģeometriska figūra “kvadrāts “ un darbības ar to.

Klasei izveidot šādas metodes:
(1) konstruktors, kas izveido kvadrātu ar malas garumu a,
(2) konstruktors, kas izveido kvadrātu kā cita kvadrāta kopiju,
(3) destruktors, kurš paziņo par objekta likvidēšanu,
(4) metode laukums(), kas aprēķina kvadrāta laukumu,
(5) metode mainit(v),
kas piešķir kvadrāta malas garumam vērtību v,
(6) metode drukat(), kas izdrukā uz ekrāna kvadrāta malas garumu un laukumu.
Pārbaudīt realizāciju, veidojot vienu Kvadrats klases objektu tiešā veidā un otru objektu – dinamiskā veidā.

***/

#include<iostream>
#include "Kvadrats.h"
using namespace std;


int main (){
    Kvadrats kv(5);
    cout<<kv.laukums()<<endl;; //25
    kv.drukat(); // 5 25
    kv.mainit(2.5);
    kv.drukat(); //2.5  6.25
    Kvadrats kv2(kv);
    kv2.drukat(); // 2.5 6.25



    Kvadrats *dkv;
    dkv = new Kvadrats(5);
    cout<<dkv->laukums()<<endl;
    dkv->drukat();
    dkv->mainit(2);
    dkv->drukat(); //2 4

    delete dkv;

    return 0;
}
