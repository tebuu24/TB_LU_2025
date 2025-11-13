#include <iostream>
using namespace std;

int main()
{
    float f;
    float c;
    cout << "Lūdzu, ievadiet temperatūru F: " << endl;
    cin >> f;
    c = 5.0/9.0*(f-32);
    cout.precision(1);
    cout.setf (ios::fixed);
    cout << "Temperatūra C: " << c <<endl;
}


//AuPLa0201. Izveidot C++ programmu, kura pārvērš Fārenheita grādos uzdotu temperatūru par temperatūru Celsija grādos. Formula pārvēršanai:
//C = 5/9(F-32)
//Temperatūru Celsija grādos izdrukāt ar vienu ciparu aiz komata. 
