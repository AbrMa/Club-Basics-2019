#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> storeData(vector<int> v);
void printVector(vector<int> v);
void ssOrder(vector<int> v);

int main()
{
	int t, n;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> a(n);
		a = storeData(a);
		ssOrder(a);
		t--;
	}
	return 0;	
}

vector<int> storeData(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cin >> v[i];
	return v;
}


void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

void ssOrder(vector<int> v)
{
	sort(v.begin(), v.end());
	for (int i = v.size() - 1; i >= 0; i--)
		if (v[i] & 1)
			cout << v[i] << " ";
	for (int i = 0; i < v.size(); i++)
		if (!(v[i] & 1))
			cout << v[i] << " ";
	cout << endl;
}
