// metožu realizācijas fails
#include <iostream>
#include "Taisnsturis.h"
using namespace std;
//Taisnsturis:: lai kompilators var saprast ka tās nav funkcijas, bet gan klases Taisnsturis metodes

Taisnsturis::Taisnsturis (float platums, float augstums){
    // platums = platums - nevar atšķirt kurš ir kurš tāpēc izmanto
    // this->x lai uzrādītu, ka tas ir iekšējais mainīgais
    if (platums > 0) this->platums = platums;
    else platums = 17;
    if (augstums > 0) this->augstums = augstums;
    else augstums = 12;
    //lai neizmantotu this-> var metodes parametros padotajiem mainīgajiem dot citus nosaukumus
}

Taisnsturis::~Taisnsturis(){
    // this atgriež objektu
    cout << "Tiks likvidēts taisnstūris "<< this << endl;
    // tiks jo destruktors tiek izsaukts tieši pirms objekta likvidēšanas
    // piem ja ir izmantota dinamiskā atmiņa, tad to atbrīvo un tikai tad likvidē objektu
}

void Taisnsturis:: setPlatums(float platums){
    if (platums > 0) this->platums = platums;
    else cout << "Kļūdaina vērtība, platums nav mainīts." <<endl;
}

void Taisnsturis:: setAugstums(float augstums){
    if (augstums > 0) this->augstums = augstums;
    else cout << "Kļūdaina vērtība, garums nav mainīts." <<endl;
}

float Taisnsturis:: getPlatums(){
    return platums;
}

float Taisnsturis:: getAugstums(){
    return augstums;
}

float Taisnsturis:: laukums(){
    return platums*augstums;
}

void Taisnsturis:: print(){
    //raksturlielums = tādas vērtības kas nosaka citas vērtības
    //šajā gadījumā augstums un platums nosaka visu - laukumu, diagonāles, perimetru utt.
    cout << "Taisnstūra platums: " << platums << endl;
    cout << "Taisnstūra augstums: " << augstums << endl;
}
