#include<iostream>
using namespace std;
int main (){
    int a = 8, b = 12, temp;
    cout << " NIAI AWAL A= " << a << " B= " << b << endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << " NILAI SETELAH DITUKAR A= " << a << " B= " << b << endl;
    return 0;
}
