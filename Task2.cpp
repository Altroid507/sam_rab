#include <iostream>

using namespace std;

int main()
{
    int n, summ, multi, maxim, n1;
    cin >> n;
    summ = 0;
    multi = 0;
    maxim = 0;
    n1 = n;
    if (n1 < 0) n1 = n1 * -1;
    for (int i = 0; i <= n1; i++){
        if (n1 % 10 > maxim) maxim = n1 % 10;
        n1 = n1 / 10;
    }
    n1 = n;
    for (int i = 0; i <= n1; i++) {
        if (n1 % 10 % 2 == 0 && n1 % 10 != 0) {
            summ += 1;
            multi += 1;
        }
        n1 = n1 / 10;
    }
    if (n1 % 10 % 2 == 0) {
        summ += 1;
        multi += 1;
    }
    summ += maxim;
    multi = multi * maxim;
    cout << summ << "\n" << multi;
    return 0;
}
