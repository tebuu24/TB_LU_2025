/***
Klases apraksts:
klase Linearavirkne attēlo virkni, kuras
n-tā locekļa vērtības ir lineāri atkarīgas no dotiem veseliem skaitļiem a, b, c un d:
V0=a; V1=b;
Vn= c*Vn-1 +d*Vn-2.

Realizētās metodes:
int virkne(n) - aprēķina n-to locekli,
void print(n) - izdrukā n-to locekli.

***/

class Linearavirkne {
    int a;
    int b;
    int c;
    int d;
public:
    Linearavirkne(int a, int b, int c, int d);
    int virkne(int n);
    void print(int n);
};
