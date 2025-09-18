/* Say you are given an array of size n and an integer k, you  have to take each prefix and 
calculate the kth smallest element. Like, if k = 4, then the 4th smallest in (1, 2, 5, 10, 3) is 5 */


#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    priority_queue<int> pq;
    for(int i = 1; i <= k; i++) {
        pq.push(v[i]);
        if(i < k) cout << -1 << " ";
    }
    cout << pq.top() << " ";
    for(int i = k + 1; i <= n; i++) {
        pq.push(v[i]);
        pq.pop();
        cout << pq.top() << " ";
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

