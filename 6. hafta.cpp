#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int sayi1;
    sayi1=rand()%100;
    cout << "1. Sayi: " <<  sayi1<< endl;
    int sayi2;
    sayi2=rand()%100;
    cout << "2. Sayi: " << sayi2<< endl;

    if (sayi1>sayi2)
        cout << "Buyuk Sayi: "<< sayi1 << endl;
    else
        cout << "Buyuk Sayi: "<< sayi2 << endl;

        return 0;

}




