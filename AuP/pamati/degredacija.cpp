#include <iostream>
using namespace std;

int main() {
    int n =18465;
    int digcount = 0;
    int digsum = 0;
    while (n>0) {
        digcount++;
        int last = n%10;
        digsum += last;
        n/=10;
        cout << n<< " "<< last << " "<<digsum<<endl; //izprintē katru soli
    }
    cout << digcount << endl; //5
    cout << digsum << endl; //24
}
