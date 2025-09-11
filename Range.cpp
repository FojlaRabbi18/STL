#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> v = {1, 2, 3, 4, 5};
	reverse(v.begin() + 1, v.begin() + 4); // 1 4 3 2 5
	// Almost all the ranges are left inclusive but right exclusive -->[v.begin(), v.end())
	for(auto i : v) {
		cout << i << " ";
	}
}
