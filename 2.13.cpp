#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout << "ax+b=0"<<endl;
    cout << "Введите a - ";
    float a;
    cin >> a;
    cout << "Введите b - ";
    float b;
    float x;
    cin >>b;
    if (a!=0) 
    {
        b=-b;
        x=b/a;
        cout <<"x= "<<x;

    }
    else 
    {
        cout <<"error";
    }

    char exit = _getch();
    return 0;
}
