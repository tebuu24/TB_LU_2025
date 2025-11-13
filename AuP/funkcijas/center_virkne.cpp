#include <iostream>
using namespace std;
#include <string>

/// AuPLa08_papildus.cpp
/****************************************************************************
AuPLa08_papildus. Sastādīt C++ funkciju center(s, garums, aizpilde), kas ir līdzīga Python metodei center(length, fill_character).
Funkcija center(s, garums, aizpilde) no saņemtās augsta līmeņa simbolu virknes s izveido augsta līmeņa simbolu virkni ar garumu garums,
kurā dotā virkne s ir novietota centrēti un abas malas ir aizpildītas ar simbolu aizpilde.
Noklusētā simbola aizpilde vērtība ir atstarpes simbols (“Space”).
Sastādīt C++ programmu, kurā tiek izsaukta funkcija center(s, garums, aizpilde).
*****************************************************************************/
/// Autors: Terēze Bogdane
/// Programma izveidota: 23.10.2025.


/**
string center(string s, int garums, string aizpilde);
Funkcija center(s, garums, aizpilde) -
 atgriež lietotāja ievadīto virkni s, kura ir novietota centrēti un abas malas ir aizpildītas ar atstarpes simbolu
**/

string center(string s, int garums, string aizpilde) {
    string virkne;
    int aizpildes_gar = (garums - s.length()) / 2.0;
    for (int i=0; i<=aizpildes_gar; i++) virkne += aizpilde;
    virkne += s;
    for (int i=0; i<=aizpildes_gar; i++) virkne += aizpilde;

    return virkne;
}

int main () {
    int ok = 1;
    while (ok == 1) {
        int garums;
        string s, aizpilde = " ";

        //lietotājs ievada simbolu virkni
        cout<< "Ievadiet simbolu virkni: "<< endl;
        getline(cin, s);

        // lietotājs ievada virknes garumu
        cout<<"Ievadiet izdrukas virknes garumu: "<<endl;
        cin >> garums;

        //izsauc funkciju un to izvada
        cout<< center(s, garums, aizpilde)<<endl;
        
        // lietotājam piedāvā atkārtotu programmas izpildi
        cout << "Vai turpināt (1) vai beigt (0)? ";
        cin >> ok;
        cin.ignore(); ///ignorē ievadīto ENTER
    }
    return 0;
}


