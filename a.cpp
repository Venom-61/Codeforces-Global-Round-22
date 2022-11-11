#include<bits/stdc++.h>
using namespace std;

#define ll long long

// A. Glory Addicts

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) 
        cin >> x;
    for(auto &x : b) 
        cin >> x;

    vector<long long> zero, one;
    for(int i = 0; i < n; i++) {
        if(a[i]) {
            one.push_back(b[i]);
        } else {
            zero.push_back(b[i]);
        }
    }
    
    sort(zero.begin(), zero.end());
    sort(one.begin(), one.end());

    long long ans = 0;
    if(one.size() == zero.size()) {
        ans -= min(one.front(), zero.front());
    }
    while(!zero.empty() and !one.empty()) {
        ans += (zero.back() + one.back()) * 2;
        zero.pop_back();
        one.pop_back();
    }

    for(auto x : zero) ans += x;
    for(auto x : one) ans += x;

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
