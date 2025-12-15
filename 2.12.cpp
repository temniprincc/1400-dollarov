#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout << "Введите площадь - ";
    float s;
    cin >> s;
    cout << "Введите количество жителей - ";
    float asd;
    cin >>asd;
    cout <<"Плотность населения - "<<asd/s;
    char eew = _getch();
    return 0;
    
}