#include <bits/stdc++.h>
using namespace std;

#define lli long long int
int n, r;
lli k;
lli a[1500002];
lli aux[1500002];

bool esPosible(lli s)
{
	bool ret = true;
	lli cont = 0;
	lli kAct = k;
	for (int i = 1 + n - r; i <= 1 + n + r; i++)
		cont += a[i];
	if (cont < s)
	{
		lli faltan = s - cont;
		if (faltan <= kAct)
		{
			cont += faltan;
			aux[1 + n + r] += faltan;
			kAct -= faltan;
		}
		else
			ret = false;
	}
	if (ret)
	{
		for (int i = 2 + n; i <= n + n; i++) 
		{
			cont -= (a[i - r - 1] + aux[i - r - 1]);
			cont += a[i + r];
			aux[i - r - 1] = 0LL;
			if (cont < s)
			{
				lli faltan = s - cont;
				if (faltan <= kAct)
				{
					cont += faltan;
					aux[i + r] += faltan;
					kAct -= faltan;
				}
				else
					ret = false;
			}	
		}
	}
	return ret;
}

int main()
{
	cin >> n >> r >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i + n];
	lli ini = 0, fin = LLONG_MAX, m, res = -1;
	while (ini <= fin)
	{
		m = (ini + fin) / 2LL;
		if (esPosible(m))
		{
			res = m;
			ini = m + 1LL;
		}
		else
			fin = m - 1LL;
	}
	cout << res << "\n";
	return 0;
}
