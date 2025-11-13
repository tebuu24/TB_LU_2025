/*****
AuPLa0301. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un nosaka lielākā skaitļa vērtību.

vispirms paprasa, cik skaitļus girb apstādāt,
tad lietotajs ievada skaitļus, mēs nosakām, kurš skaitlis ir lielākais
profesors izmanto "pakāpiena " metodi

ir pakāpiens lielākajam skaitlism, pirmo skaitli uzskata par lielāko un uzliek uz pakāpiena,
tad nākamo skaitli, kad ievada, salīdzina ar to, kas ir uz pakāpiena, un izmet to no vietas, ja ir lielāks, tā secīgi
atrod lielāko skaitli no visiem kurus ievada

var būt algoritms, kurš sākuma vērtību ieliek tādu kurā pēc tam tiks nomainīta, c++ var to izdarīt, ka uzliek ka pats pirmais bbūs mazākais iespējamais skaitlis
*******/

#include <iostream>
using namespace std;

int main()
{
    int n; //lielais N varētu nozīmēt konstanti
    int liel; // lielākā skaitļa vērtība
    int sk; //kārtējais ievadītais skaitlis
    //šajā uzdevumā pietiek atmiņā turēt tikai lielāko un nākamo, nav prasīts visus paturēt

    //pieprasa ievadīt skaitļu skaitu N un nodrošina, ka N ir korekts (N>=1)
    //izmanto do while nosacījumu struktūru
    do
    {
    cout << "Lūdzu, ievadiet cik skaitļus jūs vēlaties ievadīt: " << endl;
    cin >> n;
    if (n<1) cout << "Nepareiza vērtība. Ievadiet N, N>=1" << endl;
    }
    while (n<=0);

    //nosaka lielākā skaitļa vērtību liel no ievadītajiem N veselajiem skaitļiem
    //lieto "pakāpiena" metodi
    // tā kā mēs apstrādājam tikai vienu skaitli vienlaicīgi, mēs varma izmantot ciklu ar skaitītāju
    cout << "Ievadiet veselu skaitli: " << endl;
    cin >> liel;

    for (int i=0; i<n-1; i++)
    {
        //saņem jaunu skaitli un ieliek sk mainīgajā, lai to salīdzinātu ar liel
        cout << "Ievadiet veselu skaitli: " << endl;
        cin >> sk;
        //ja sk ir lielāks par liel, tad iestata jaunu liel vērtību
        if (sk > liel) liel=sk;
    }


    //izdrukā lielākā skaitļa vērtību liel
    cout << liel << " ir lielākais skaitlis" << endl;

}
