#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std; 

int main()
{
	string s;
	vector<char> numbers;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		if (!(i & 1))
			numbers.push_back(s[i]);
	sort(numbers.begin(), numbers.end());
	for (int i = 0; i < numbers.size() - 1; i++)
		cout << numbers[i] << "+";
	cout << numbers[numbers.size() - 1] << endl;
	cout << endl;
	return 0;
}
