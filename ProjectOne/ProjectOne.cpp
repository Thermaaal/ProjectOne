#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    cout << "Введите чич" << endl;
    cin >> a;
    cout << "Введите второй чич" << endl;
    cin >> b;
    
    while (a != b) {
        if (a > b) {
            a -= b;
        } 
        else {
            b -= a;
        }
    }
    cout << a << endl;

    return 0;
}
