#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL,".UTF8");
    int user;
    cout << "Введите длину ребра куба: ";
    cin >> user;
    int v = pow(user,3);
    int bok = pow(user,2) *4;
    cout << "Обьем - " << v << "S бок - " << bok;
    string rp;
    cin >>rp;
    return 0;
}