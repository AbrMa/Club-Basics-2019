#include <iostream>
#include <vector>
using namespace std;

vector<int> storeData(vector<int> v);
void printLeaders(vector<int> v);

int main()
{
	int t, n;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> a(n);
		a = storeData(a);
		printLeaders(a);
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

void printLeaders(vector<int> v)
{
	int aux = v[v.size() - 1];
	vector<int> l;
	for (int i = v.size() - 1; i >= 0; i--)
		if (v[i] >= aux)
		{
			l.push_back(v[i]);
			aux = v[i];
		}
	for (int i = l.size() - 1; i >= 0; i--)
		cout << l[i] << " ";
	cout << endl;
}
