/**
AuPLa1301. Izveidot C++ klasi darray, izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos. Klases hederi obligāti novietot atsevišķā hedera failā (darray.h). Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (darray.cpp). Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Jārealizē metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.
Masīva elementu aizpildīšanai realizēt privātu metodi fill_array().
Izveidot klasi darray pārbaudošu programmu, kurā tiek izveidoti divi klases objekti – automātiskā (tiešā) veidā un dinamiski un objektiem tiek pielietotas metodes.

---------------------------------
Veselu skaitļu masīvs ar n elementiem
tieši veidots n=3   int arr[3] |arr[0]_|_arr[2]|
dinamiski veidots int n; n|_3_|  int * arr;  |arr_|  ->(uz pirmo kastīti) |_|_|_|
konsturktoram nepadosim kā parametru arr norādes mainīgo, pietiek ar elementa skaita padošanu, jo veidosim dinamisku masīvu

fill array nav parametru, kā iegūsim?
-var iekodēt cieti
-prasa lietotājam ievadīt
brīva izvēle


**/

#include<iostream>
#include"darray.h"
using namespace std;

int main(){
    darray mas1(4); // Ievadām: 2, 3, 4, 5
    cout<<mas1.array_avg()<<endl;  // 14/4 = 3,5
    mas1.print_array(); // Masīvs: 2, 3, 4, 5
    darray mas2(mas1); // izveido masīvu kopiju mas1
    mas2.print_array(); // Masīvs: 2, 3, 4, 5

    int n;
    darray * dmas1;
    do {
        cout<<"Ievadiet elementu skaitu n, n>=1: "<<endl;
        cin>>n;
        if (n<1) cout<<"Kļūdaina vērtība. Ievadiet vēlreiz!"<<endl;
    } while(n<1);

    dmas1 = new darray(n); 
    cout<<dmas1->array_avg()<<endl;
    dmas1->print_array();

    delete dmas1;

}






