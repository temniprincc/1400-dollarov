#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout << "Введите первый катет - ";
    float a1;
    cin >>a1;
    cout << "Введите второй катет - ";
    float a2;
    cin >>a2;
    float g;
    g = pow(a1,2)+pow(a2,2);
    g= sqrt(g);
    cout << "Гипотенуза - " <<g <<endl;

    char exit = _getch();
    return 0;
}