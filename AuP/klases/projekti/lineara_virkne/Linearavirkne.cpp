//klases metožu realizācija
#include <iostream>
#include "Linearavirkne.h"
using namespace std;

Linearavirkne::Linearavirkne(int a, int b, int c, int d){
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}


int Linearavirkne:: virkne(int n) {
    //aprēķina n-to locekli
    // funkcija: Vn= c*Vn-1 +d*Vn-2, kur V0=a V1=b
    if (n==0) return this->a;
    if (n==1) return this->b;
    return this->c*virkne(n-1)+ this->d*virkne(n-2);
}

void Linearavirkne:: print(int n) {
    //izdrukā n-to locekli
    cout<< virkne(n)<<endl;
}
