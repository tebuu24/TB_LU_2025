/**
AuPLa1101. Izveidot C++ klasi ”Taisnsturis”,
izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot atsevišķā hedera failā (Taisnsturis.h).
Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (Taisnsturis.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klasei ”Taisnsturis” jāapraksta taisnstūris ar
platumu platums un augstumu augstums.

Realizēt metodes:
Taisnsturis(platums, augstums) – konstruktors,
~Taisnsturis() – destruktors,
setPlatums(platums) – uzstāda taisnstūra platumu,
getPlatums() – atgriež taisnstūra platumu,
setAugstums(augstums) – uzstāda taisnstūra augstumu,
getAugstums() – atgriež taisnstūra augstumu,
laukums() – atgriež taisnstūra laukumu,
print() – izdrukā taisnstūra raksturlielumus.
Izveidot klasi „Taisnsturis” pārbaudošu programmu,
kurā tiek izveidoti divi klases objekti –
tiešā veidā un dinamiskā veidā un
objektiem tiek pielietotas visas metodes.

**/

///Autors: Terēze Bogdane
///Veidošanas datums: 13.11.2025.

#include <iostream>  // < nozīmē ka meklē sistēmas failos
#include "Taisnsturis.h" // "nozīmē ka projekts meklēs failu tajā pašā direktorijā kur main.cpp
using namespace std;

int main() {
    Taisnsturis taisn(3, 4);
    taisn.print(); // 3 4
    taisn.setPlatums(3.5);
    taisn.getPlatums(); // 3.5
    taisn.setAugstums(4.5);
    taisn.getAugstums(); //4.5
    cout << taisn.laukums() << endl; //15.75


    /**
    //mans kaut kas eksperimentālais ar lietotāja ievadi
    float augstums, platums;
    cout << "Lūdzu ievadiet taisnstūra platumu: " <<endl;
    cin >> platums;
    cout << "Lūdzu ievadiet taisnstūra augstumu: " <<endl;
    cin >> augstums;

    Taisnsturis taisn2(platums, augstums);
    taisn2.print();
    taisn2.setPlatums(3.5);
    taisn2.getPlatums();
    taisn2.setAugstums(4.5);
    taisn2.getAugstums();
    cout << taisn2.laukums() << endl;
    **/

    //dinamiskais
    Taisnsturis* dtaisn;
    dtaisn = new Taisnsturis(3, 4); //noteikti būs jāatbrīvo atmiņa tāpēc uzreiz pēc šīs rindiņas izveides uztaisa delete programmas apakšā (lai neaizmirstu)
    //tāpēc ka ir norādi, nevar taisīt metodes izsaukumus ar . jo tas nav pats objekts
    // izmanto -> lai norādītu uz objektu
    dtaisn->print(); // 3 4
    dtaisn->setPlatums(3.5);
    dtaisn->getPlatums(); // 3.5
    dtaisn->setAugstums(4.5);
    dtaisn->getAugstums(); //4.5
    cout << dtaisn->laukums() << endl;

    /**
    // cout << (*dtaisn).laukums() << endl;
    // tas strādā jo dtaisn ir norāde, ja priekšā norāda ** tad mēs pārejam uz objektu uz kuru norāda dtaisn
    // ja mums ir objekts tad mēs varam izmantot .laukums() metodi
    //taču stilam un izskatam (visas iepriekšējās ir ar -> ) profesoram patīk labāk rakstīt ->
    **/

    delete dtaisn;

    return 0;
}

