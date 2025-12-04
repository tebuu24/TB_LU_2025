//klases metožu realizācija
#include<iostream>
#include"Kvadrats.h"
using namespace std;

Kvadrats :: Kvadrats(float a){
    if (a>0) this->a = a;
    else this->a = 2;
}

Kvadrats :: Kvadrats(const Kvadrats &cits){
    a = cits.a;
}

Kvadrats :: ~Kvadrats(){
    cout<< "Tiek iznīcināts objekts ar adresi "<< this<<endl;
}

float Kvadrats::laukums(){
    return a*a;
}

void Kvadrats::mainit(float v){
    if (v>0) a = v;
}

void Kvadrats::drukat(){
    cout<<"Kvadrāta malas garums: "<< a<<endl;
    cout<<"Kvadrāta laukums: "<<laukums()<<endl;
}
