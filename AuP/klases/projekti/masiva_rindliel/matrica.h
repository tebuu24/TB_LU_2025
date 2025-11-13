/**
int rindlielais(int *matr, int n, int m, int r);
Funkcija rindlielais(matr, n, m, r),
    atgriež lielāko skaitli veselu skaitļu matricas matr r-tajā rindā,
    kura sastāv no n rindām un m kolonnām.
**/

int rindlielais(int *matr, int n, int m, int r) {
    int lielsk;
    for (int i = 0; i<n; i++) {
        if (i == r) {
        lielsk = matr[i][0];
        for (int j =1; j<m; j++){
            if (matr[r][j]>lielsk) lielsk = matr[r][j];
        }
        }
    }
    return lielsk;
}
