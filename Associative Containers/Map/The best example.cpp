/* Say you have q queries of 2 types "add", "remove". For "add", add the element to the list
and for "remove", remove one occurance of that element. And after each operation, print the
number of unique element in the list */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int q;
    cin >> q;
    map<int, int> mp;
    for(int i = 1; i <= q; i++) {
        string s;
        int key;
        cin >> s >> key;
        if(s == "add") {
            mp[key]++;
        }
        else {
            // Again, in map, everything is about the key
            auto it = mp.find(key);
            if(it != mp.end()) {
                mp[key]--;
                if(mp[key] == 0) { // This is a must stuff to do
                    mp.erase(key);
                    //cout << mp.size() - 1 << " "; // oh, no!!
                }
            }
            // find() + erase() = 2*log n == O(log n)
            // so, overall O(q*log n)
        }
        cout << mp.size() << " "; // size will give the number of unique element

    }
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
/* 
1
10
add 1
add 2
add 3
add 3
remove 10
remove 3
add 5
add 5
remove 9
remove 5

1 2 3 3 3 3 4 4 4 4 */
}



