#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> v(5); // By default initialized to 0
	for(int i = 0; i < 5; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	v.assign(7, 10);
	// First 7 elements will be assigned 10
	
	for(int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}

/*  10 10 10 10 10 10 10 3 4 5   */

}
