#include <iostream>
#include <vector>

using namespace std;
vector<int> meteVector(vector<int> a);
int peso(vector<int> a, int w, int h);

int main()
{
	int w,h;
	cin >> w >> h;
	vector<int> a(h+1);
	a = meteVector(a);
	cout << peso(a,w,h); 
	return 0;
}

vector<int> meteVector(vector<int> a)
{
	int b,c;
	for(int i = 0; i < 2; i++)
	{
		cin >> b >> c;
		a[c] = b;
	}
	return a;
}

int peso(vector<int> a, int w, int h)
{
	int resultado = w; 
	for(int i = h; i >= 0; i--)
	{
		resultado += i;
		resultado -= a[i];
		if( resultado < 0)
			resultado = 0;
	}
	return resultado;

}
