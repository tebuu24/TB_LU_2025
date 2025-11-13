/******** AuPLa0401. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un nosaka garākās stingri augošas virknes garumu.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

pirmo skaitli var ievadīt kā 1
ievadītos skaitļus uztver kā skaitļu virkni, mēs tajā meklējam augošu secību, nosakam garākās atrastās virknes garumu

var izmantot pakāpes metodi, kuru izmantojām iepriekš
katrā rindā atrod lielāko skaitli

vajag 2 mainīgos tikai - N un iepriekšējās rindas lielāko skaitli

Ja ir, tad var izmantot programmu, kur jau ir uzbūvēti "ķieģelīši", kas atļauj programmai strādāt atkārtoti - var atrast estudijās sadaļā c++ miniprogrammas iesākumam.
Te izmantosim iorepeat.

************/

#include<iostream>
using namespace std;
int main()
{
    int ok;
    do
    {

        int n;
        int liel_gar; //pats lielākais atrastais garums
        int sk;  //tekoši ievadītais
        int iepr; //iepriekšējais skaitlis
        int kart_gar; //tekoši uzskaitītais

        //ievada virknes garumu, pārbauda vai n ir naturāls skaitlis
        do{
        cout<<"Ievadiet skaitļu skaitu N, N>=1: "<<endl;
        cin >> n;
        if(n<1) cout<<"Kļūdaina vērtība. Jāievada N, N>=1."<<endl;
        }while(n<1);

        //pirmo skaitli var jau ievadīt, tas veidos jau pašlaik garāko virkni
        cout << "Ievadiet veselu skaitli: " << endl;
        cin >> iepr;
        liel_gar = kart_gar = 1;

        //cikls, kur tiek ievadīti nākamie skaitļi
        for (int i=0; i<n-1; i++)
        {
            //saņem jaunu skaitli un ieliek sk mainīgajā, lai to salīdzinātu ar liel
            cout << "Ievadiet veselu skaitli: " << endl;
            cin >> sk;
            //ja sk ir lielāks par liel, tad iestata jaunu liel vērtību
            if (sk > iepr) kart_gar++;
            // ja kārtējā virkne beidzās, tad
            else
            {
                //ievieto kārtējo garumu lielākajā garumā, ja tas ir lielāks un atiestata kartējo garumu nākamajam ciklam
                if (kart_gar > liel_gar) liel_gar=kart_gar;
                kart_gar = 1;

            }
            //ievieto ievadīto skaitli iepriekšējā skaitļa mainīgajā
            iepr = sk;
        }
        
        //vēl viena pārbaude ārpus cikla
        if (kart_gar > liel_gar) liel_gar=kart_gar;
        
        //izvada lielākās virknes garumu
        cout << "Garākās virknes garums: " << liel_gar << endl;

        //programmas darbību var atkārtot
        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}






