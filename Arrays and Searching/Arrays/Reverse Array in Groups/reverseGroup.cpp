#include <iostream>
#include <vector>
using namespace std;

vector<int> storeData(vector<int> v);
void reverseGroup(vector<int> v, int k);
void reverseVector(vector<int> v);

int main()
{
	int t, n, k;
	cin >> t;
	while (t)
	{
		cin >> n >> k;
		vector<int> a(n);
		a = storeData(a);
		reverseGroup(a,k);
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

void reverseGroup(vector<int> v, int k)
{
	int aux = 0;
	vector<int> b;
	for (int i = 0; i < v.size(); i++)
	{
		b.push_back(v[i]);
		aux++;
		if (aux == k)
		{
			reverseVector(b);
			b.clear();
			aux = 0;
		}
	}
	if (aux < k)	
		reverseVector(b);
	cout << endl;
}

void reverseVector(vector<int> v)
{
	for (int i = v.size() - 1; i >= 0; i--)
		cout << v[i] << " ";
}
