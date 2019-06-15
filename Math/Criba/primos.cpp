#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> numeros(n + 1);
	for (int i = 1; i <= n; i++)
		numeros[i] = i;
	for (int i = 3; i <= n; i++)
		if (!(numeros[i] & 1))
			numeros[i] = -1;
	for (int i = 3; i <= n; i += 2)
		if (numeros[i] != -1)
			for (int j = i * i; j <= n; j += (2 * i))
				numeros[j] = -1;
	for (int i = 2; i <= n; i++)
		if (numeros[i] != -1)
				cout << numeros[i]  << endl;
	return 0;
}
