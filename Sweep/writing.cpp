#include <iostream>
using namespace std;

int n, m;
char a[3002], b[3000002];	
int cubetaA[302], cubetaB[302];

int main()
{
	cin >> n >> m;
	for (int i = 1; i<= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	for (int i = 1; i <= n; i++)
		cubetaA[a[i]]++;
	for (int i = 1; i <= n; i++)
		cubetaB[b[i]]++;
	int coincidencias = 0;
	for (int i = 1; i <= 300; i++)
	{
		if (cubetaA[i] == cubetaB[i])
			coincidencias++;
	}
	int res = 0;
	if (coincidencias == 300)
		res++;
	for (int i = 2; n + i - 1 <= m; i++)
	{
		bool eranIguales = cubetaA[b[i - 1]] == cubetaB[b[i - 1]] ? true : false;
		cubetaB[b[i - 1]]--;
		bool sonIguales =cubetaA[b[i - 1]] == cubetaB[b[i - 1]] ? true : false;
		if (eranIguales)
			coincidencias--;
		else if (sonIguales)
				coincidencias++;
		eranIguales = cubetaA[b[n + i - 1]] == cubetaB[b[n + i - 1]] ? true : false;
		cubetaB[b[n + i -  1]]++;
		sonIguales =cubetaA[b[n + i - 1]] == cubetaB[b[n + i - 1]] ? true : false;
		if (eranIguales)
			coincidencias--;
		else if (sonIguales)
				coincidencias++;
		if (coincidencias == 300)
			res++;

	}
	cout << res << endl;
	return 0;
}
