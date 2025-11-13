/***
AuPLa0303. Dots naturāls skaitlis n.
Sastādīt C++ programmu, kas izdrukā laukumu n × n no simboliem, kas atbilst šādam rakstam (pie n=12):

jaizdrukā n rindiņas, katrā n simbolu skaits, kas ir atkarīgs no pašas rindiņas numura
***/

#include <iostream>
using namespace std;

int main()
{
    int n;
    //do while, kur tiek ievadīts rindiņu skaits un tiek pārbaudīts, ka n ir korekts (n>=1)
    do
    {
        cout << "Lūdzu, ievadiet rindu skaitu: " << endl;
        cin >> n;
        if (n<1) cout << "Nepareiza vērtība. Jāievada N, N>=1" << endl;
    }
    while (n<=0);

    // cikls, kas izdrukā n skaitam attiecīgās rindiņas ar simboliem
    // rinda satur simbolus attiecīgi cikla iterācijas skaitlim
    cout << "*" << endl;

    for (int i=0; i<n-1; i++)
    {
        // cikls kas izvada vienā rindiņā * vienādā skaitā ar i
        for (int a=i; a>0; a--) cout << "*";
        cout << endl;
    }
}
