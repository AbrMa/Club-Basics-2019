#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main() {
	int n;
	string s;
	map<char,vector<char> > m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s[0] == '*') {
			cin >> s;
		}	
		else {
			m[s[1]].push_back(s[3]);
		}
		m.clear();
	}
	return 0;
}
