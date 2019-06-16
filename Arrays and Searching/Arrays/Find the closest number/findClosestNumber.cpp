#include <iostream>
#include <vector>
using namespace std;

vector<int> storeData(vector<int> v);
void printClosestN(vector<int> v, int n);

int main()
{
	int t, n, k;
	cin >> t;
	while (t)
	{
		cin >> n >> k;
		vector<int> arr(n);
		arr = storeData(arr);
		printClosestN(arr, k);
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

void printClosestN(vector<int> v, int n)
{
	int closest = v[0], dif = n - v[0], aux;
	for (int i = 0; i < v.size(); i++)
	{
		aux = n - v[i];
		if (aux < 0)
			aux *= -1;
		if (aux <= dif)
		{
			dif = aux;
			closest = v[i];
		}
	}
	cout << closest << endl;
}
