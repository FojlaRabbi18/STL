// https://cses.fi/problemset/task/1161/

/* You have a stick of length x and you want to divide it into n sticks, with given lengths, whose total length is x.
On each move you can take any stick and divide it into two sticks. The cost of such an operation is the length of the original stick.
What is the minimum cost needed to create the sticks? */
/* Input:
  8 3
  2 3 3  */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    priority_queue<int, vector<int>, greater<int>> pq; // Min heap
    for(int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        pq.push(val);
    }
    ll ans = 0;
    while(pq.size() > 1) {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += x + y;
        pq.push(x + y);
    }
    cout << ans << '\n';
    
    return 0;
}
