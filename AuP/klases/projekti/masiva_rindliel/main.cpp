/**
AuPLa1102. Sastādīt C++ funkciju rindlielais(matr, n, m, r),
kas noskaidro lielāko skaitli veselu skaitļu matricas matr r-tajā rindā.
Matrica matr sastāv no n rindām un m kolonnām.
Sastādīt arī izsaucošo programmu, kurā tiek noskaidrots lielākais skaitlis katrai matricas rindai.
Noskaidrošanu veikt gan tieši izveidotai matricai, gan dinamiski izveidotai matricai.

Autors: Terēze Bogdane
Veidošanas datums: 13.11.2025.
**/

#include <iostream>
#include "matrica.h"
using namespace std;

int main () {
    int matr[3][4]; //statiska matrica

    for (int i =0; i<3, i++) {
        cout << rindlielais(matr, 3, 4, i)
    }


}
