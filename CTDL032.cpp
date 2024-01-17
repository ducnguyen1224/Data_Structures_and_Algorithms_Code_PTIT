#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> f0(n+1, 0);
    vector<long long> f1(n+1, 0);

    f0[0] = 1;
    f1[0] = 1;

    long long sum_f0 = f0[0];
    long long sum_f1 = f1[0];

    for (long long i = 1; i <= n; i++) {
        if (i - k - 1 >= 0) {
            sum_f1 = (sum_f1 - f1[i-k-1] + MOD) % MOD;
            sum_f0 = (sum_f0 - f0[i-k-1] + MOD) % MOD;
        }
        f0[i] = sum_f1;
        f1[i] = sum_f0;

        sum_f0 = (sum_f0 + f1[i]) % MOD;
        sum_f1 = (sum_f1 + f0[i]) % MOD;
    }

    cout << (f0[n] + f1[n]) % MOD << endl;

    return 0;
}