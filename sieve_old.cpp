#include<iostream>
#include<cmath>
using namespace std;
 
int main(void){
    unsigned limit;
 
    cout << "Please insert upper limit.\n";
    cin >> limit;
 
    bool *Stroke = new bool[limit+1];
    Stroke[0]=1;
    Stroke[1]=1;
    for(unsigned i=2; i<=limit; ++i) Stroke[i] = 0;
 
    unsigned prime=2;
    while(pow((double)prime,2.0)<=limit){
        for(unsigned i = (int)pow((double)prime,2.0); i<=limit; i+=prime){
            Stroke[i]=1;
        }
 
        do ++prime; while(Stroke[prime]);
    }
 
    cout << "\nPrimes less or equal " << limit << " are:\n";
    for(unsigned i=0; i<=limit; ++i){
        if(!Stroke[i]) cout << i << endl;
    }
    delete[] Stroke;

    return 0;
}
