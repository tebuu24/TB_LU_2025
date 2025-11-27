/**
Klases darray metožu realizācija
**/
#include<iostream>
#include"darray.h"
using namespace std;

darray::darray(int n) {
    if (n >= 1) this->n = n;
    else n = 5;
    //veido dinamisku masīvu adresē mas ar elementu skaitu n
    (this->mas) = new int[this->n]; //svarīgi šajā vietā dinamisku masīvu veidot ar pareizo n!
    //masīvu piepilda ar privāto metodi fill_array()
    this->fill_array();
    cout<<endl;
}

darray::darray(darray &arr){
    n = arr.n;
    (this->mas) = new int[arr.n];
    for (int i =0; i< n; i++){
        this->mas[i]=arr.mas[i];
    }
    cout<<endl;
}

darray::~darray(){
    cout<<"Objekts ar adresi "<< this << " tiek dzēsts."<<endl;
}


float darray::array_avg(){
    float sum=0;
    for (int i=0; i<(this->n);i++){
        sum += (this->mas)[i];
    }
    cout<<"Masīva elementu vidējā vērtība: ";
    return sum/(this->n);
}

void darray::print_array(){
    cout<<"Masīvs: ";
    for (int i=0; i<(this->n); i++){
        cout<< (this->mas)[i]<< ", ";
    }
    cout<< endl;
}

void darray::fill_array(){
    for (int i=0; i< this->n; i++){
        cout<<"Lūdzu, ievadiet skaitli: "<<endl;
        cin>> (this->mas)[i];
    }
}
