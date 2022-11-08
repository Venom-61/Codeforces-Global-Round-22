#include<bits/stdc++.h>
using namespace std;

#define ll long long

// B. Prefix sum addicts

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> s(n + 1);
    for(int i = n - k + 1; i <= n; ++i) 
        cin >> s[i];

    if(k == 1) {
        cout << "YES\n";
        return ;
    }

    vector<ll> a(n + 1);
    for(int i = n - k + 2; i <= n; ++i) 
        a[i] = s[i] - s[i - 1];
    
    if(!std::is_sorted(a.begin() + n - k + 2, a.end())) {
        cout << "NO\n";
        return ;
    }

    if(s[n - k + 1] > (n - k + 1) * a[n - k + 2]) {
        cout << "NO\n";
        return ;
    }

    cout << "YES\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
