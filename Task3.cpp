#include <iostream>

using namespace std;

int main()
{
    int n, maxim, maxim2, multi, n1;
    cin >> n;
    maxim = 0;
    maxim2 = 0;
    if (n < 0) n = n * -1;
    n1 = n;
    for (int i = 0; i <= n; i++){
        if (n % 10 > maxim) {
            maxim = n % 10;
        }
        n = n / 10;
    }
    n = n1;
    for (int i=0; i <= n; i++){
        if (n % 10 > maxim2){
            if (n % 10 < maxim){
                maxim2 = n % 10;
            }
        }
        n = n / 10;
    }
    if (n % 10 > maxim2){
        if (n % 10 < maxim){
            maxim2 = n % 10;
        }
    }
    if (maxim2 == 0) maxim2 = maxim;
    multi = maxim * maxim2;
    n = n1;
    if (n1 / 10 == 0) cout << 0;
    else cout << multi;

    return 0;
}
