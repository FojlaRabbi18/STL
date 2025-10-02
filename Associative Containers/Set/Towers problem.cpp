// https://codeforces.com/gym/102961/problem/N

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    multiset<int> se; 
    // Storing the top element of each table
    // 8 cannot be put on 8, that's why multiset
    se.insert(v[0]);
    for(int i = 1; i < n; i++) {
        auto it = se.upper_bound(v[i]); 
        // Searching the next larger of current element
        // because, we need to be greedy to select tower
        if(it != se.end()) {
            se.erase(it);
            se.insert(v[i]);
        }
        else {
            se.insert(v[i]);
        }        
    }
    cout << se.size() << '\n';
    
    return 0;
}
