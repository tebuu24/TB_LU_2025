/***********
Terēze Bogdane, tb24033

AuPLa0205. Izveidot C++ programmu, kura ļauj ievadīt trīs naturālus skaitļus un noskaidro,
vai starp skaitļiem ir kāds “laimīgais skaitlis”.
“Laimīgais skaitlis” ir tāds skaitlis, kura pēdējie divi cipari ir 21.
Noskaidrošanu veikt tikai ar skaitliskām darbībām.
Risinājumu noformēt atbilstoši dokumenta “Laboratorijas darbu noteikumi” prasībām.

Programma izveidota: 11.09.2025.

***********/
// jāpārbauda vai ir ievadīti naturāļi skaitļi
//labāk ir, ja ir ievadīti nepareizi skaitļi, dod lietotājam iespēju vēlreiz ievadīt skaitļus
// uzzināt pēdējos 2 skaitlus var dalot mainīgo ar 100 un ņemot ar atlikumu piem, 121 % 100 = 21
#include <iostream>
using namespace std;

int main()
{
    int ok;
    do
    {
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;

        int sk1, sk2, sk3;
        bool atrasts = false;  // nav vēl atrasts "laimīgais skaitlis"
        cout << "Lūdzu, ievadiet 3 skaitļus: " << endl;
        cin >> sk1 >> sk2 >> sk3;

        if (sk1%100 == 21) atrasts = true;
        if (sk2%100 == 21) atrasts = true;
        if (sk3%100 == 21) atrasts = true;

        if (atrasts){
            cout << "Starp skaitļiem ir \"laimīgais skaitlis\" " << endl;
        }
        else {
            cout << "Starp skaitļiem nav \"laimīgo skaitļu\" " << endl;
        }
    } while (ok == 1);
}


/****************** Testu plāns ******************
ievade           paredzamais rezultāts
21 3 7        ir kāds "laimīgais skaitlis"
67 34 15      nav neviena "laimīgā skaitļa"
-5 3 70       kļūda: jāievada naturāli skaitļi
*************************************************/
