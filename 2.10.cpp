#include <iostream>
#include<math.h>
#include <conio.h>
using namespace std;
int main() {
    setlocale(LC_ALL, ".UTF8");
    cout << "Введите 2 числа: ";
    int user;
    int user2;
    cin >>user;
    cin >> user2;
    cout <<"Среднее арифметическое " << (user + user2)/2<< endl;
    //b
    cout << "Среднее геометрическое " <<sqrt(user*user2)<<endl;
    char rp = _getch();
}