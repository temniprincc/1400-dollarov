#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout << "Введите e: ";
    float e;
    cin >> e;

    cout << "Введите f: ";
    float f;
    cin >> f;

    cout << "Введите g: ";
    float g;
    cin >> g;

    cout << "Введите h: ";
    float h;
    cin >> h;

    float a = sqrt ( pow ( abs ( e- ( 3 / f ) ) , 3 ) +g );
    float b = sin(e)+pow(cos(h),2);
    float c = ( (33*g) /( e * f - 3 )       );
    cout << "a: " <<a<<endl;
    cout << "b: " <<b<<endl;
    cout << "c: " <<c<<endl;
    char exit = _getch();
    return 0;

}