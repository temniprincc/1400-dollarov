#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    cout <<"Введите внешний радиус - ";
    float R;
    cin >>R;
    cout <<"Введите внутренний радиус - ";
    float r;
    cin >> r;
    float pi=3.14;
    cout <<"Площадь кольца - "<<pi*(pow(R,2)-pow(r,2))<<endl;
    system("pause");
}