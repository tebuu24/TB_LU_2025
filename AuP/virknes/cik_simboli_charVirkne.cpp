/// AuPLa0701.cpp
/***************************
AuPLa0701. Sastādīt C++ programmu, kas ļauj noskaidrot, cik reizes teksta rindiņā ir sastopams konkrēts simbols.
Gan teksta rindiņu, gan simbolu ievada lietotājs. Teksta rindiņa jāsaglabā programmā kā zema līmeņa simbolu virkne.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
***********************************/
/// Autors: Terēze Bogdane, izmantots e-studiju 6. nodarbības risinājums AuPLa601.cpp
/// Izveidota: 16.10.2025.

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int ok; // lietotāja atbilde: 1- turpināt, 0, beigt
    do{
        char rind[81];  //teksta rindiņa ne garāka par 80 simboliem
                        //81 simbolā ir zema līmeņa simbolu virknes beigu simbols (simbols ar kodu 0, kuru ieliks getline)
        char simb;      //dotais simbols
        int reizes = 0;  //cik reizes teksta rindā rind ir sastopams simbols simb
        // Ievada no tastatūras teksta rindiņu rind (rind < 80 simboli)
        cout << " Lūdzu, ievadiet teksta rindiņu, ne garāku par 80 simboliem: " << endl;
        cin.getline(rind, 81);

        //ievada no tastatūras simbolu simb
        cout << "Ievadiet, kādu simbolu meklēt: " <<endl;
        cin.get(simb);

        // Noskaidro,cik reizes teksta rindiņā ir sastopams konkrēts simbols
        //ieraksta mainīgajā reizes skaitu
        for (int i=0; i<strlen(rind); i++){
            if (rind[i] == simb) reizes++;
        }

        //izdrukā reižu skaitu reizes
        cout << "Simbols " << simb<< " teksta rindā ir sastopams " << reizes << " reizes." <<endl;

        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
        cin.ignore();
    } while (ok == 1);
}


/***************** Testu plāns *******************************
teksta rindiņa       simbols         paredzamais rezultāts
" Te ir teksts "       ' '                    4
"a,b!"                 'c'                    0
*************************************************************/
