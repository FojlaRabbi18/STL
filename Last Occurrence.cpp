#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 4, 2};

    auto rit = find(v.rbegin(), v.rend(), 2);
    if (rit != v.rend()) {
        // Converting reverse_iterator to normal iterator
        auto it = rit.base() - 1; // rit.base() returns normal iterator to one past the rit
        cout << "Last occurrence of 2 at index: " << (it - v.begin()) << endl;
    } else {
        cout << "Not found" << endl;
    }
}
