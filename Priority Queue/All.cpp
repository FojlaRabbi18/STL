#include<bits/stdc++.h>
using namespace std;

int main() {
	// By default max priority queue
	priority_queue<int> pq;
	pq.push(2);
	pq.push(3);
	pq.push(10);
	pq.push(4);
	// The queue could be like 10, 4, 2, 3  or 10, 3, 2, 4
	// If you pop 10, then 4 must be at top, that's why O(log n) (Heap)
	cout << pq.top() << '\n'; // 10
	pq.pop();
	cout << pq.top(); // 4
	// For min priority queue 
	priority_queue<int, vector<int>, greater<int>> p;


    return 0;
}
