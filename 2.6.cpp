#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL,".UTF8");
    int r = 6350;
    int h;
    cout << "Введите высоту: ";
    cin >> h;
    int dist = pow(pow(r+h,2)-pow(r,2),0.5);
    cout << dist;
    string rp;
    cin >>rp;
}
