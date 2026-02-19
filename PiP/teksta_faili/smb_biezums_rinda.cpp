/***
PiPLa0101. Sastādīt C++ programmu, kas aprēķina, cik reizes dotajā teksta failā in0101.txt sastopams lietotāja dots simbols.
Dati no faila jānolasa pa vienai rindiņai. Nedrīkst dublēt visa faila saturu operatīvajā atmiņā.
Izdrukāt rezultātu.


datu saņēmējs būs mainīgais s

no prezentācijas slaida par neformatētu failu lasīšanu
    while(fin){
        //ir kļūda, ka vai failam vispār var piekļūt, tātad vai fin vispār ir iespējams piesaisīt failam
        cout<<s<<endl; //saņēmējs ir cout, kur arī var mainīt saturu, zinot, ka piesaistīts ir ekrāns
        getline(fin,s);
    };

***/


#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int ok;
    do{
        string s;
        char simb;
        int reizes = 0;
        string fails;

        cout<<"Ievadiet faila nosaukumu: "<<endl;
        getline(cin, fails);

        fstream fin (fails.c_str(), ios::in);
        //pārbaude, vai failam ir iespējams piesaistīt fin
        if(!fin) { // tiek pārbaudīti fin visi stāvokļa mainīgie, ja kāds ir false, tad atgriež true - kaut kas nav pareizi
            cout<<"Nevar atvērt failu" << endl;
            //būtu labi te piedāvāt citu faila vārdu ievadīt (beigt/turpināt darbu)
            return 13; // ja ir kļūda, beidz darbu
        }

        getline (fin, s);  //šeit norāda, ka saņēmējs ir mainīgais s

        //lietotājs ievada simbolu, to saglabā mainīgajā simb
        cout<< "Ievadiet simbolu: "<<endl;
        cin.get(simb);  //no tastatūras iegūst vienu simbolu


        //palielina mainīgo reizes par simmbola simb sastapšanas reižu skaitu rindiņā s
        while(!fin.eof()){
            for(int i=0; i<s.length(); i++){
                if(s[i] == simb) reizes++;
            }
            getline(fin, s); //nākamā rindiņa
        }

        //izvada rezultātu
        cout<<"Simbols "<< simb<<" failā "<<fails<< " atkārtojas "<< reizes<<" reizes"<<endl;

        fin.close();

        cout<<"Vai turpināt(1), vai beigt(0)?"<<endl;
        cin >> ok;
        cin.ignore(); //enter simbols paliek pēc cin (saņem vērtību līdz atdales simbolam, kas paliek buferī)
    }while(ok);

    return 0;
}
