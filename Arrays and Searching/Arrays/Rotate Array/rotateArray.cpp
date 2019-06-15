#include <iostream>
#include <vector>
using namespace std;
vector<int> storeData(vector<int> a);
void rotate(vector<int> a, int d);

int main()
{
	int t, n, d;
	cin >> t;
	while (t)
	{
		cin >> n >> d;
		vector<int> a(n);
		a = storeData(a);
		rotate(a,d);
		t--;
	}
	return 0;
}

vector<int> storeData(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	return a;
}

void rotate(vector<int> a, int d)
{
	for (int i = d; i < a.size(); i++)
		cout << a[i] << " ";	
	for (int i = 0; i < d; i++)
		cout << a[i] << " ";
	cout << "\n";
}
