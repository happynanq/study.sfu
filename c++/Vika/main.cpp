//Даны натуральные числа n и k. Составить программу вычисления выражения 1k + 2k + ... + nk.

#include <bits/stdc++.h>
using namespace std;

int main() {
    setlocale( LC_ALL,"Russian" );
    int k, n, sum=0;
    cout << "введите натуральное число n: "; cin >> n;
    cout << "введите степень k: "; cin >> k;

    for (int i = 0; i <= n; i++) {
        int n = i;

        sum += pow(i, k);
    }
    cout << sum;
    return 0;
}


