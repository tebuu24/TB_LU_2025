/***

PiPLa0202. Sastādīt C++ programmu, kas izdzēš no dotās skaitļu virknes lietotāja dotu skaitli visās tā vietās.
Skaitļu virkne jārealizē divos veidos, izmantojot STL::list konteineru un izmantojot STL::vector konteineru.


-ņemam kodu no pirmā uzdevuma, izmainām
-meklējam profesora Zutera materiālos 20. nodaļā, kā notiek elementu dzēšana (197.lpp.)
    -skatāmies, kā notiek dzēšana ar iteratoru
    -vispirms atrod skaitli, tad iterators to izmanto, lai dzēstu
    -iterators tad atgriežas uz sākotnējo
    -bet tas ir vektoram un pieprasījums ir visās vietās
        -jāizdomā kā izpilda vairākas reizes un beidz tikai ja nav izdevies izdzēst
        - kā erase uzvedas, ja nevar izdzēst?
            -atgriež un nākošo, pēc izdzēstā, ja atkal un atkal izsauc tad virzāmies uz priekšu
            -kad iterators norāda uz fiktīvo end elementu, tad darbs ir beigts

            -atrodam ka arī ir piemērs izdzēst pēc vērtības, bet jautājums, kas notiek, ja jādzēš vairākas reizes
                - var eksperimentēt un uzzināt
                - var sameklēt internetā

-sameklējam arī kā var list un vektoru izvadīt pēc izmaiņu veikšanas

-interesants fakts: mēs redzējām, ka sarakstam ir remove un ar vienu rindiņu var iegūt rezultātu, ka dzēš visur
vektoram tāda nav, tāpēc veidojām ciklu BET
    -vektoram ir remove FUNKCIJA
        -viens priekšraksts
        -loģiski izdzēstos elementus atstāj vektora beigās
        -rezultāts ir uz pirmo izdzēsto elementu
        -loģiski dzēstos elementus fiziski var dzēst ar erase
            -kuru var pielietot idzēsto elementu intervālam
            - "erase-remove-idiom"
    -tātad ir metode vai remove funkcija
***/


#include <iostream>
#include <vector>
#include<list>
#include<algorithm>
using namespace std;

int main(){

    vector<int> intV={12, -2, 17, 12};
    list<int> intL={12, -3, 17, 12};

    int sk = 12;

    auto iV = find(intV.begin(), intV.end(), sk);
    while (iV != intV.end()) { //mēs izsaucam find un ja tas ir atradis, tad dzēšam - liekam while ciklā
        iV = intV.erase(iV);
        //atrod elementu -> dzēš -> ņem nākamo vērtību
        //otrais etaps ciklam, kur iegūst nākamo vērtību - iterators uz vēl kādu dzēšamo skaitli
        //iterators atgriež vērtību uz nākamo skaitli pēc erase
        //tāpēc šo erase mēs piešķiram iV
        //tad atkal meklējam
        iV= find(intV.begin(), intV.end(), sk); // vai sāksim no sākuma vai no nākamā?
        //mēs jau zinām, ka sākumā nav vairs meklējamās vērtības tātad varam atsākt meklēt no nakamā

    }

    //izvada elementus
    for (auto &a: intV) { cout<<a<<" "; };



    //sarakstam metode remove izmēģinājums (sarakstā 2reiz parādās 12)
    //intL.remove(12); aizvietojam iekavās dzēst iteratora norādīto skaitli, tad vēlreiz

    /*** sarakstu izvadām pēc izmaiņām
    for (auto &a: intlL) {
        cout<<a<<" ";
    }  sagaidām -3 17
    ***/

    // erase-remove idioma
    vector<int> intV2={12, -2, 17, 12};
    for(auto &e: intV2) {cout<<e<<" "; }; // 12 -2 17 12
    cout<<endl;
    //funkcijai padod remove funkcija (kas loģiski tos dzēš, bet īstenībā novieto vektora beigās ar iteratoru šī intervāla sākumā)
    // erase tad dzēš visu šo intervālu - no pirmā loģiski dzēstā līdz vektora beigām
    intV2.erase(remove(intV2.begin(), intV2.end(), sk), intV2.end());
    for(auto &e: intV2) {cout<<e<<" "; }; //-3 17
    cout<<endl;


    //list remove metode
    intL.remove(sk);
    for (auto &a: intL) { cout<<a<<" "; };
    cout<< endl;
}
