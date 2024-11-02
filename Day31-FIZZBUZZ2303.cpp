#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int factorial(int n) {
    if(n <= 1) return 1;
    int fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--) {
        int n; cin >> n;
        cout << factorial(n) / factorial(n-2) << endl;
    }

    return 0;
}