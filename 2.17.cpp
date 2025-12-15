#include <iostream>
#include <math.h>
using namespace std;
int main(){
    setlocale(LC_ALL,".UTF8");
    cout <<"Введите нижнее(большее) основание трапеции - ";
    float a1;
    cin >>a1;
    cout <<"Введите верхнее(меньшее) основание трапеции - ";
    float a2;
    cin >>a2;
    cout <<"Введите высоту - ";
    float h;
    cin >>h;
    float psp = a1-a2;
    psp/2;
    float gip=pow(psp,2)+pow(h,2);
    gip = sqrt(gip);
    cout << "Периметр - "<<gip+gip+a1+a2 <<endl;
    system("pause");
    return 0;
}