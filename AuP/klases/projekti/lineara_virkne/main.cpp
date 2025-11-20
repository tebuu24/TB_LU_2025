/***
AuPLa1201. Sastādīt C++ klasi Linearavirkne, izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos. Klases deklarāciju obligāti novietot atsevišķā hedera failā (Linearavirkne.h). Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (Linearavirkne.cpp). Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klase Linearavirkne attēlo virkni, kuras
n-tā locekļa vērtības ir lineāri atkarīgas no dotiem veseliem skaitļiem a, b, c un d:
V0=a; V1=b;
Vn= c*Vn-1 +d*Vn-2.
Jārealizē metodes:
virkne(n) - aprēķina n-to locekli,
print(n) – izdrukā n-to locekli.

Sastādīt klasi Linearavirkne pārbaudošu programmu, kurā tiek izveidoti divi klases objekti – automātiskā(tiešā) veidā un dinamiski un objektiem tiek pielietotas visas metodes.

Programmas autors: Terēze Bogdane
Programma veidota: 20.11.2025.
***/

#include <iostream>
#include "Linearavirkne.h"
using namespace std;

int main () {
    Linearavirkne virkne1(1, 2, 3, 4);
    int ntais1 = virkne1.virkne(4);
    cout<<ntais1<<endl;
    virkne1.print(4);

    Linearavirkne * dvirkne;
    dvirkne = new Linearavirkne(1, 2, 3, 4);
    int ntais2 = dvirkne->virkne(5);
    cout << ntais2<<endl;
    dvirkne->print(5);

    delete dvirkne;
    return 0;
}
