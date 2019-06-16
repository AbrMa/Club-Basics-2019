#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> storeData(vector<int> v);
void printPenArray(vector<int> v);

int main()
{
	int t, n;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> arr(n);
		arr = storeData(arr);
		printPenArray(arr);
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

void printPenArray(vector<int> v)
{
	int j = 1, k, l;
	vector<int> aux(v.size());
	sort(v.begin(), v.end());
	if (!(v.size() & 1))
	{
		aux[(v.size() / 2) - 1] = v[0];
		k = (v.size() / 2);
		l = (v.size() / 2) - 2;
	}
	else
	{
		aux[v.size() / 2] = v[0];
		k = (v.size() / 2) + 1;
		l = (v.size() / 2) - 1;
	}
	for (int i = k; i < aux.size(); i++)
	{
		aux[i] = v[j];
		j += 2;
	}
	j = 2;
	for (int i = l; i >= 0; i--)
	{
		aux[i] = v[j];
		j += 2;
	}
	for (int i = 0; i < aux.size(); i++)
		cout << aux[i] << " ";
	cout << endl;
}
