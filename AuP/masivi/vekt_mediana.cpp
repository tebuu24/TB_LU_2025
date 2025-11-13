/**********
AuPLa0902. Izveidot C++ programmu, kas ievada N naturālus skaitļus, saglabā skaitļus vektorā un aprēķina skaitļu mediānu.
Mediāna ir skaitlis, kas sadala kādu sakārtotu skaitļu kopu divās daļās.
Galīga skaitļu saraksta mediānu var atrast, sakārtojot sarakstu augošā secībā, mediāna ir vidējā vērtība,
piemēram, (3, 3, 5, 9, 11) mediāna ir 5. Ja sarakstā ir pāra skaits elementu, tad mediānu iegūst kā sakārtota skaitļu saraksta divu vidējo elementu summas pusi,
piemēram, (3, 5, 8, 9) mediāna ir (5 + 8)/ 2 = 6.5.
Mediānas aprēķināšanai izveidot funkciju.
Var pieņemt, ka skaitļi tiek ievadīti augošā kārtībā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

**********/

#include <iostream>
#include <vector>
using namespace std;

/**
double mediana(vector<int> aa, int n);
Funkcija mediana(aa, n) -
    atgriež kā rezultātu n garuma sakārtota naturālo skaitļu vektora aa mediānu.
**/
double mediana(vector<int> aa, int n){
    double med;
    if (n%2==0){
        med = (aa[n/2]+aa[(n/2)-1])/2.0;
    }
    else {
        med = aa[n/2];
    }
    return med;
}


int main () {
    int ok;
    do{
        int n;
        //pieprasa ievadīto skaitļu skaitu
        do {
            cout<<"Lūdzu ievadiet skaitļu skaitu, 1<=skaits" <<endl;
            cin >> n;
            if (n<1) cout<<"Ievadītā vērtība nav derīga. Jāievada 1<=skaits" <<endl;
        } while (n<1);


        //izveido vektoru
        vector<int> aa;

        int sk;
        //piepilda vektoru ar n lietotāja ievadītām vērtibām sk
        for (int i=0; i<n; i++){
            cout<<"Lūdzu ievadiet skaitli: " <<endl;
            cin>>sk;
            aa.push_back(sk);
        }

        // for (auto i : aa) cout << i << endl; //vektora vērtību izvadīšana pārbaudei

        //izsauc funkciju
        double med = mediana(aa, n);

        //izprintē mediānu
        cout<<"Mediāna: "<< med<<endl;


        //piedāvā lietotājam iespēju atkārtot programmu
        cout << "Vai turpināt (1) vai beigt (0)?"<<endl;
        cin >> ok;
    } while (ok==1);

    return 0;
}



/*********** Testu plāns **************
sk     skaitļi     paredzmais rezultāts
4      1 2 3 4            2.5
5     1 2 3 4 5            3
**************************************/
