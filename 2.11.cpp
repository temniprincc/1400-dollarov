#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    float m;
    cout << "Введите массу: ";
    cin>>m;
    float v;
    cout << "Введите обьем: ";
    cin >>v;
    float p = m/v;
    cout <<"Плотность - " <<p << endl;
    char us = _getch();

    return 0;


}