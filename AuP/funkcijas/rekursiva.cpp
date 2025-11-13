#include <iostream>
using namespace std;

/****************************************************************************
AuPLa1001. Izveidot C++ rekursīvu funkciju, kas aprēķina virknes n-to locekli.
Virkne uzdota ar sakarību:
v0 = 2; v1 = 3;
vn = 4*vn-1 + 3*vn-2;
Izveidot C++ programmu, kas izsauc izveidoto funkciju.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

ieteikums fjā iekšējos mainīgos neizmantot, jo tie prasa papildus atmiņas resursus.
*****************************************************************************/


/**
int ntais(int a);
Funkcija ntais(a) -
 atgriež kā rezultātu skaitli, kurš skaitļu virknē ir ievadītā skaitļa pozīcijā.
**/
int ntais(int n){
    if (n==0) return 2;
    if (n==1) return 3;
    return 4*ntais(n-1)+3*ntais(n-2);

}

int main(){
    int ok;
    do{
        int n, sk;
        cout<<"Lūdzu ievadiet n."<<endl;
        cin>>n;

        sk = ntais(n);
        cout<<sk<<endl;

        cout << " Vai turpināt (1) vai beigt (0)?" << endl;
        cin >> ok;
    } while (ok == 1);
}
