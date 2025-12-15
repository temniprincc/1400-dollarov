#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main () {
    //a
    setlocale(LC_ALL,".UTF8");
    cout <<"Введите x: ";
    float x;
    cin >>x;
    cout <<"Введите y: ";
    float y; 
    cin >>y;
    float z = 2*pow(x,3)-3.44*x*y+2.3*pow(x,2)-7.1*y+2;
    cout <<z<<endl;
    //b
    cout <<"Введите a: ";
    float a;
    cin >>a;
    cout <<"Введите b: ";
    float b; 
    cin >>b;
    x=3.14*pow((a+b),3)+2.75*pow(b,2)-12.7*a-4.1;
    cout <<x<<endl;
    string rp;
    cin >>rp;
    return 0;

}
