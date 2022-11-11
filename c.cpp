#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Even number Addicts

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int even = 0;
    for(auto& x : a) {
        cin >> x;
        if(x % 2 == 0) 
            even++;
    }
    int odd = n - even;

    if(odd % 4 == 0)
        cout << "Alice\n";
    else if(odd % 4 == 2)
        cout << "Bob\n";
    else if(odd % 4 == 3)
        cout << "Alice\n";
    else if(even % 2 == 1) 
        cout << "Alice\n";
    else 
        cout << "Bob\n";
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
