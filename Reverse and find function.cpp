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
	// STL find function
	// returns an iterator pointng to the first occurance of the target value
	// otherwise, returns v.end()  
	vector<int>:: iterator it = find(v.begin(), v.end(), 4);
	if(it == v.end()) {
		cout << "Not found\n";
	}
	else {
		cout << "The index is: " << (it - v.begin()) << '\n';
		cout << (v.end() - it); // 4 --->(it + 4 = v.end())
		// Subtruction always gives the distance between two iterators
	}
}
