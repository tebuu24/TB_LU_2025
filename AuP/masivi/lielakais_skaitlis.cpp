#include<iostream>
using namespace std;
/****

AuPLa0601. Sastādīt C++ programmu, kurā lietotājs ievada veselu skaitļu masīvu.
Skaitļu skaitu uzdod lietotājs. Pēc ievada jāizdrukā masīva lielākā elementa vērtība un visas atrašanās vietas.
Visas atrašanās vietas jāsaglabā citā masīvā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.


-dubultās lomas ideja/princips = ieviešam tādu mainīgo lielskaits=0 kas ir leilākā elementu skaits, kas reizē ir brīvās vietas indekss skaitļu masīvā
-vieglāk ir algrotimā izveidot otru masīvu kas ir tikpat garš cik doto skaitļu masīvs, bet tikai atstājam tukšas vietas kur vajag
-mēs veidojam masīvu, kurā ir saglabāti indeksi
-tātad mainīgais iegūst lielāko skaitļa vērtību, tad kad to vērtību ievada masīvā no konsoles, mēs saglabājam indeksu no sdoto skaitļu masīva iekš mūsu lielāko skaitļu masīvā

***/
int main()
{
    int ok;
    do
    {
        int arr_size;
        int liel;
        int sk;
        int liel_skaits =0;

        //pieprasam elementu skaitu masīvā
        do
        {
            cout << "Lūdzu, ievadiet skaitļu skaitu: " << endl;
            cin >> arr_size;
            if (arr_size<1) cout << "Nepareiza vērtība. Skaitļu skaits ir naturāls skaitlis: " << endl;
        } while (arr_size<=0);

        int *arr;
        arr = new int[arr_size];

        int*liel_arr;
        liel_arr = new int[arr_size];

        //lietotājs ievada skaitļus, kurus pievieno masīvam arr
        //lietotājs ievada pirmo skaitli, tad tas ir pašlaik lielākais
        cout << "Ievadiet pirmo skaitli: " << endl;
        cin >> liel;
        arr[0]=liel;

        //cikls meklē lielāko ievadīto skaitli un ievada to mainīgajā liel
        //saņem jaunu skaitli un ieliek sk mainīgajā, lai to salīdzinātu ar liel
        for (int i=1;i<=arr_size-1;i++){
             cout << "Ievadiet kārtējo skaitli: " << endl;
             cin  >> arr[i];
             if (arr[i]>liel)liel=arr[i]; // nodrošina, ka liel joprojām ir pašlaik lielākais
             // iliel ir jāsaglabā masīvā liel_arr
        }

        //cikls iet cauri arr lai atrastu pozīcijas/indeksus lielākajiem skaitļiem
        for (int i = 0; i < arr_size; i++) {
            if (arr[i] == liel) {
                liel_arr[liel_skaits] = i; //lielskaits nosaka, cik mums ir lielākie skaitļi, bet arī kurā vietā ielikt indeksu no arr
                liel_skaits++;
            }
        }

        cout << "Lielākā vertība ir "<< liel <<" un tas tika ievadīts "<<liel_skaits<<" reizes."<<endl;

        //masīva dzēšana, lai neaizņemtu atmiņau
        delete[] arr;
        delete[] liel_arr;

        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}
