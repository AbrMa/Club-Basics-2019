#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> meteVector(int n);
int promedio(vector<int> u, int n);
int moda(vector<int> u, int n);

int main()
{
	int n = 0; 
    	cin >> n;
	vector<int> a = meteVector(n);
	sort(a.begin(), a.end());
	cout << "Media: "  << promedio(a,n) << "\n";
	cout << "Moda: " << moda(a,n) << "\n";
	cout << "Mediana: " << a[n/2] << "\n";
	return 0;
}

vector<int> meteVector(int n)
{
	vector<int> u(n);
	for(int i=0; i<n; i++)
		cin >> u[i];
	return u;
}

int promedio(vector<int> u, int n)
{
	long long int promedio = 0;
	for(auto a: u)
		promedio += a;
	return promedio /= n;
}

int moda(vector<int> u, int n)
{
	int moda = 0, a = 0, b = 0, c = u[0];
	for(int i=0; i<n; i++)
	{
		if(c==u[i])
			a++;
		else
		{
			if(b<a)
			{
				b = a;
				moda = u[i-1];
			}
			a=1;
			c=u[i];
		}
	}
	if(b<a)
		moda = u[n-1];
	return moda;
}
