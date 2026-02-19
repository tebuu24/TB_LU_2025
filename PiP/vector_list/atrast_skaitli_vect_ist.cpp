/***
PiPLa0201. Sastādīt C++ programmu, kas noskaidro, vai dotajā skaitļu virknē ir sastopams lietotāja dots skaitlis.
Skaitļu virkne jārealizē divos veidos, izmantojot STL::list konteineru un izmantojot STL::vector konteineru.

-jāpievieno bibliotēkas
-pieņemsim, ka ir pieprasītas int vērtības
-pieņem, ka skaitļu sarakstā ir pozitīvas un negatīvas vērtības
-būtu labi veidot funkciju, kas to noskaidrošanu veic
    - saņem argumentu
    - bet ir prolēma, ideāli būtu funkcija, kas spēj apstrādāt gan vektoru, gan list (citādi jāveido 2 funkcijas)
        - funkciju veidne
- profesora Zutera materiāli 20. nodaļa (191. lpp.)
    - vektoram find algoritms (200.lpp.)
    - count algoritms
    -nepieciešams pievienot algorithm bibliotēku, ja izmanto find

-parasti dots interpretē kā lietotāja ievadīts, bet šajā risinājumā jau atkāpjamies un "cieti" definējam, tāpēc varam to pašu ar skaitli
- labāks variants ir ar while ciklu meklēt, kur izejam no cikla, ja izpildās nosacījums, ka ir virknes beigas vai visi skaitļi (skarīt?)
- tagad izmēģināsim vieglo metodi ar find algoritmu
    - atgriež iteratora vērtību
        -ja nav vienāda ar interatoru, kas norāda saraksta beigām, tad nav atrasts
        -citādi zināk, ka ir atrasts

-algoritmiski identiski var atrast abiem veidiem šo skaitli -> veidojam funkciju (bet atstāsim vēlākam)
***/

#include <iostream>
#include <vector>
#include<list>
#include<algorithm>
using namespace std;

int main(){

    vector<int> intV={12, -2, 17};
    list<int> intL={12, -3, 17};

    //lietotājs ievada skaitli sk
    //cout<<"Ievadiet skaitli: "<<endl;
    int sk = 17;

    //no materiāliem 200.lp
    auto iV = find(intV.begin(), intV.end(), sk);
    //vai var likt sk? var likt, jo tas ir lieotājam jāredz, kuru skaitli atrada
    // ko nozīmē *i? Ir jāzina kas ir i, iterators, *i paņem vērtību, uz kuru iterators norāda
    //iteratora norādītā vērtība, ja find ir atradis, tad arī ir tā sk vērtība!
    if (iV != intV.end()) cout<<"Pastāv: "<<*iV<<endl;
    else cout<<"Nav atrasts."<<endl;

    //nomaina i uz citu, jo konfliktē ar pirmo i - tad abus mainām uz iV un iL
    auto iL = find(intL.begin(), intL.end(), sk);
    if (iL != intL.end()) cout<<"Pastāv: "<<*iL<<endl;
    else cout<<"Nav atrasts."<<endl;



}


