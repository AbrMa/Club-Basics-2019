#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define lli long long int

const lli MAXN = 1000000;
int n;
lli h[MAXN + 2];
lli izq[MAXN + 2];
lli der[MAXN + 2];
stack<int> pila;
lli res;

void llenarIzq()
{
	for(int i = 1; i <= n; i++)
	{
		while(!pila.empty() && h[pila.top()] >= h[i])
		{
			izq[i] += (izq[pila.top()] + 1);
			pila.pop();
		}
		pila.push(i);
	}
}

void llenarDer()
{
	while(!pila.empty())
		pila.pop();
	for(int i = n; i >= 1; i--)
	{
		while(!pila.empty() && h[pila.top()] >= h[i])
		{
			der[i] += (der[pila.top()] + 1);
			pila.pop();
		}
		pila.push(i);
	}
}


void obtenerRes()
{
	for(int i = 1; i <= n; i++)
	{
		lli base = 1 + izq[i] + der[i];
		lli area = base * h[i];
		res = max(res, area);
	}
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> h[i];
	llenarIzq();
	llenarDer();
	obtenerRes();
	cout << res << "\n";
	return 0;
}
