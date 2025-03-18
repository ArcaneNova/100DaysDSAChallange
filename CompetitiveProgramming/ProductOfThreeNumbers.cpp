#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    vector<long long> factors;
    
    // Finding first factor
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            n /= i;
            break;
        }
    }

    // Finding second factor
    for (long long i = factors[0] + 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            n /= i;
            break;
        }
    }

    // The third factor is the remaining number
    if (n > 1 && n != factors[0] && n != factors[1]) {
        factors.push_back(n);
    }

    // Check if we found three distinct factors
    if (factors.size() == 3) {
        cout << "YES\n";
        cout << factors[0] << " " << factors[1] << " " << factors[2] << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
