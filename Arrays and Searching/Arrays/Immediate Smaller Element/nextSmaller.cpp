#include <iostream>
#include <vector>
using namespace std;

vector<int> storeData(vector<int> a, int n);
void nextSmaller(vector<int> a, int n);

int main()
{
	int t, n;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> a(n);
		a = storeData(a, n);
		nextSmaller(a, n);
		t--;
	}
	return 0;
}

vector<int> storeData(vector<int> a, int n)
{
	for (int i = 0; i < n ; i++)
		cin >> a[i];
	return a;
}

void nextSmaller(vector<int> a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i+1])
			cout << a[i+1] << " ";
		else 
			cout << "-1 ";
	}
	cout << "-1\n";
}
