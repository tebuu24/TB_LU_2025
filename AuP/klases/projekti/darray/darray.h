/**
klases hederis

Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Klases metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.

privāta metode fill_array() - masīva elementu aizpildīšanai.

----------
konstruktoram mēs padodam elementu skaitu, bet pašai klasei viens lauks būs norāde
**/

class darray {
    int n;
    int *mas;
public:
    darray(int n);
    darray(darray &arr);
    ~darray();
    float array_avg();
    void print_array();
private:
    void fill_array();
};
