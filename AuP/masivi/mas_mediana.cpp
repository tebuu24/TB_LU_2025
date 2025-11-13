/***********
AuPLa0901. Izveidot C++ programmu, kas ievada N naturālus skaitļus, saglabā skaitļus gan statiskā masīvā, gan dinamiskā masīvā un aprēķina skaitļu mediānu.
Mediāna ir skaitlis, kas sadala kādu sakārtotu skaitļu kopu divās daļās. Galīga skaitļu saraksta mediānu var atrast, sakārtojot sarakstu augošā secībā, mediāna ir vidējā vērtība,
piemēram, (3, 3, 5, 9, 11) mediāna ir 5. Ja sarakstā ir pāra skaits elementu, tad mediānu iegūst kā sakārtota skaitļu saraksta divu vidējo elementu summas pusi,
piemēram, (3, 5, 8, 9) mediāna ir (5 + 8)/ 2 = 6.5.
Mediānas aprēķināšanai izveidot funkciju.
Var pieņemt, ka skaitļi tiek ievadīti augošā kārtībā.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.


Mēs varam funkcijai padot statisku masīvu un statiskajam masīvam uzlikt ierobežojumu, piemēram, 50.
***********/

#include <iostream>
using namespace std;

/**
double mediana(int mas[], int n);
Funkcija mediana(mas, n) -
    atgriež kā rezultātu n garuma sakārtota naturālo skaitļu masīva mas mediānu.
**/
double mediana(int mas[], int n){
    double med;
    if (n%2==0){
        med = (mas[n/2]+mas[(n/2)-1])/2.0;
    }
    else {
        med = mas[n/2];
    }
    return med;
}


int main () {
    int ok;
    do{
        const int N = 50; //ierobežojums statiskajam maasīvam
        int mas1[N];
        //ievada un apstrādā statisku masīvu mas1 ar elementu sk, 1<=sk<=N
        double med; //aprēķinātā mediāna
        int sk;

        do {
            cout<<"Lūdzu ievadiet skaitļu skaitu, 1<=skaits<="<< N<<endl;
            cin >> sk;
            if (sk<1 || sk>N) cout<<"Ievadītā vērtība nav derīga. Jāievada 1<=skaits<="<< N<<endl;
        } while (sk<1 || sk>N);



        for (int i=0; i<sk; i++){
            cout<<"Lūdzu ievadiet skaitli: "<<endl;
            cin >> mas1[i];
        }

        //ievada un apstrādā statisku masīvu mas2 ar elementu skaitu lielāku par 0
        int *mas2;
        mas2 = new int[sk];
        for (int i=0; i<sk; i++){
            for (int i = 0; i<sk; i++) {
                mas2[i] = mas1[i];
            }
        }

        med = mediana(mas1, sk);
        cout<<"Mediāna: "<<med<<endl;


        delete[] mas2;


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
