#include <iostream>

using namespace std;

int main()
{
    int n, summ;
    cin >> n;
    summ = 0;
    if (n < 0) n = n * -1;
    for (int i = 0; i <= n; i++) {
        if (n % 10 % 2 == 1) summ += n % 10;
        n = n / 10;
    }
    summ += n % 10;
    cout << summ;
    return 0;
}
