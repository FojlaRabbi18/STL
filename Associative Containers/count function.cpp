#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> se = {1, 2, 3, 4};

    cout << se.count(2) << '\n'; // Output: 1 (because 2 is present)
    cout << se.count(5) << '\n'; // Output: 0 (because 5 is not present)
}
// **** Valid for all Associative containers ****
