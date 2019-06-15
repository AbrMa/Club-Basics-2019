#include <iostream>
#include <vector>
using namespace std;

vector<int> storeData(vector<int> u);
void rotate(vector<int> u, int d);

int main()
{
	int t, n, d;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> a(n);
		a = storeData(a);
		cin >> d;
		rotate(a, d);
		t--;
	}
	return 0;
}

vector<int> storeData(vector<int> u)
{
	for (int i = 0; i < u.size(); i++)
		cin >> u[i];
	return u;
}

void rotate(vector<int> u, int d)
{
	for (int i = d; i < u.size(); i++)
		cout << u[i] << " ";
	for (int i = 0; i < d; i++)
		cout << u[i] << " ";
	cout << "\n";
}
