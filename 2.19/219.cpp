#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    float a;
    float b;
    cout << "Введите a: ";
    cin >> a;
    cout << endl;
    cout << "Введите b: ";
    cin >> b;
    cout << endl;
    float x = ( ( 2 / ( pow ( a,2 ) +25 ) +b )/ ( sqrt ( b ) + ( ( a+b ) / 2 ) ) );
    float y = ( (abs(a)+2*sin(b))/5.5*a );
    cout << "x: " <<x <<endl;
    cout << "y: " << y<<endl;
    char exit = _getch();
}