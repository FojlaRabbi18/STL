/* Say you have two arrays a, b of size m, n. You need to delete one occurance of 
each element of array a which are present in b. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int m, n;
    cin >> m >> n;
    multiset<int> a;
    vector<int> b(n + 1);
    for(int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for(int i = 1; i <= n; i++) {
        // a.erase(a.find(b[i])); // You can't do that (a.end() can appear)
        auto it = a.find(b[i]);
        if(it != a.end()) {
            a.erase(it);
        }
    }
    for(auto it: a) {
        cout << it << " ";
    }
    
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

