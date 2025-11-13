#include <iostream>
using namespace std;

/****************************************************************************
AuPLa1002. Izveidot C++ funkciju veidni
lielrindassumma(tab, r, k), kas noskaidro, kurā rindā dinamiski veidotā skaitļu tabulā tab ar r rindām un k kolonnām ir lielākā elementu summa un atgriež rindas numuru kā rezultātu.
Rindas numurē no 1.
Veidot funkciju veidni lielrindassumma tā, lai veidne darbotos korekti int, float un double argumentiem.
Izveidot C++ programmu, kas izsauc funkciju lielrindassumma(tab, r, k). Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.

*****************************************************************************/


/**
T lielrindassumma(T tab, int r, int k);
Funkciju veidne lielrindassumma(tab, r, k)-
    atgriež kā rezultātu rindas numuru, kurā rindā dinamiski veidotā skaitļu tabulā tab ar r rindām un k kolonnām ir lielākā elementu summa.
**/
template<typename T>
int lielrindassumma(T**tab, int r, int k){
    T lsum = 0; //pašlaik lielākās rindas elementu summa
    T sum;  //kārtējas rindas elementu summu
    int lrinda = 0;  //rindas nr rindai ar pašlaik lielāko summu - cikla skaitītājs

    /**
    lieto pakāpiena metodi -
    1.pieņem, ka lielākā rindas elementu summa ir 1. rindā,
    2.apskata tabulas tab rinda, sākot ar 2. rindu,
    3.atrod kārtējās rindas summu sum un
    4. nomaina lsum, ja sum>lsum
    **/
    for (int j=0; j<k; j++){ // j nevis i, jo divdimensiju masīvam liek i un j. šeit summējam ar fiksētu i
        lsum += tab[0][j]; // 0 jo pirmā rinda ir īstenībā nultā rinda pēc indeksiem
    }

    for (int i=1; i<r;i++){
        sum = 0;
        for (int j=0; j<k; j++){
            sum += tab[i][j];
        }
        if (sum>lsum){
            lsum = sum;
            lrinda = i;
        }
    }

    return lrinda +1;

}

int main(){
    int **mas;
    float** masf;
    double** masd;
    int rin, kol;
    int lielrinnum;

    cout<<"Ievadiet rindu skaitu, skaits>=1:" <<endl;
    cin>> rin;

    cout<<"Ievadiet kolonnu skaitu, skaits >=1:"<<endl;
    cin>>kol;

    //masīvam piešķir dinamisko atmiņu
    mas = new int*[rin];
    for (int i=0;i<rin;i++) mas[i] = new int[kol]; //katrai rindai pieškir tik kolonnu šūnas

    //lietotājs ievada vērtības masīvā
    for(int i=0;i<rin;i++){
        for(int j=0; j<kol;j++){
            cout<<"Ievadiet elementu:"<<endl;
            cin>>mas[i][j];
        }
    }

    lielrinnum = lielrindassumma(mas, rin, kol);
    cout<<"Rinda, kurā ir lielākā elementu summa: "<<lielrinnum<<endl;

    //atbrīvo dinamisko atmiņu
    for (int i=0;i<rin;i++) delete[] mas[i];
    delete[] mas;


}








