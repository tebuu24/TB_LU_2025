#include <iostream>
using namespace std;

/****************************************************************************
AuPLa10_papildus. Izveidot C++ funkciju veidni rindliels(matr, n, m, r), kas aprēķina, cik skaitļu matricas matr r-tajā rindā ir "lielo skaitļu".
"Liels skaitlis" ir tāds skaitlis, kas ir lielāks par 17. Matrica matr sastāv no n rindām un m kolonnām.
Izveidot arī izsaucošo programmu, kurā tiek aprēķināts, cik ir "lielo skaitļu" katrā matricas rindā.
Aprēķinu veikt gan statiskai matricai, gan dinamiskai matricai.
*****************************************************************************/


/**
int rindliels(**matr, int n, int m, int r);
Funkciju veidne rindliels(matr, n, m, r)-
    atgriež kā rezultātu cik skaitļu matricas matr r-tajā rindā ir "lielo skaitļu"- skaitlis, kas ir lielāks par 17.
**/
template<typename T>
int rindliels(T**matr, int *n, int m, int r){
    int skaits = 0;
    for (int i=0; i<n;i++){
        for (int j=0; j<m;j++){
            if (matr[i][j]>17) skaits+=1;
        }
    }
    return skaits;
}

int main(){
    //n - rinda
    //m - kolonna
    int n=2, m=3;

    int matrS[n][m] = {{1,20,3},{2,18,30}};
    cout<< rindliels(matrS, n, m, 2);




}








