// nav pabeigts


/***********
AuPLa0903. Izveidot C++ funkciju, kas aprēķina virknes n-to locekli.
Virkne uzdota ar sakarību:
v0 = 2; v1 = 3;
vn = 4*vn-1 + 3*vn-2;
Izveidot C++ programmu, kas izsauc izveidoto funkciju.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
***********/

#include <iostream>
#include <vector>
using namespace std;

/**
int loceklis(int n);
Funkcija loceklis(n) -
    atgriež kā rezultātu veselu skaitli, kas ir virknes n-tais loceklis.
**/
int loceklis(int n){
    int v2 = 2; //v(n-2)
    int v1 = 3; //v(n-1)
    //vn = 4*vn-1 + 3*vn-2
    vector<int> aa = {v2, v1};
    for (int i=2; i<n; i++) {
        
    }
    
    
    return vn;
}


int main () {
    int ok;
    do{
        //lietotājs ievada skaitļu daudzumu
        int n;
        do {
            cout<<"Lūdzu ievadiet skaitļu skaitu, 1<=skaits"<<endl;
            cin >> n;
            if (n<1) cout<<"Ievadītā vērtība nav derīga. Jāievada 1<=skaits"<<endl;
        } while (n<1);

        //izsauc funkciju

        //izvada rezultātu
        

        //piedāvā lietotājam iespēju atkārtot programmu
        cout << "Vai turpināt (1) vai beigt (0)?"<<endl;
        cin >> ok;
    } while (ok==1);

    return 0;
}

