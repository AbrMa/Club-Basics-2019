#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int n;
	cin >> n;
	cin >> s;
	sort(s.begin(), s.end());
	cout << s;
	return 0;
}
