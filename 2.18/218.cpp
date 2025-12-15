#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"UTF8");
    cout << "Введите x: ";
    float x ;
    cin >>x;
    cout <<endl;
    cout << "Введите y: ";
    float y ;
    cin >> y ; 
    cout <<endl;
    float z = (x+((2+y)/pow(x,2)))/(y + ((1)/(sqrt(pow(x,2)+10))));
    float q = 7.25 * sin(x)-abs(y);
    cout << "z: " <<z<<endl;
    cout << "q: " <<q <<endl;
    char exit = _getch();


}