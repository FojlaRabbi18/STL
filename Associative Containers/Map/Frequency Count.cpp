#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<string, int> freq (vector<string> &s){
    map<string, int> m;
    for(int i = 0; i < s.size(); i++) {
        m[s[i]]++;  
        // When the value part is not present and we are still trying to 
        // access the value part then it starts from the default value.
        // key++ means the value associated with the key is increasing 
        // like int x = 20; ---> x++ is 20 + 1 = 21
    }
    return m;
}
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    map<string, int> m = freq(s);
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << (*it).first << " " << (*it).second << '\n';
        // Must use the (*it) then first and second, because "it" is an iterator
        // so we cannot write it.first and it.second, we need to access the pair first..
    }


}
