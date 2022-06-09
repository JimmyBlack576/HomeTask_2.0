#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a,summa = 0;
    cin >> a;
    for (int i = a; i <= 500; i++) {
        summa = summa + i;
    }
    cout << summa;
}

