#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tam = 2*n+1;

	vector<char> a(tam);
	vector<char> b(tam);

	for(int i=0; i<n; i++)
		a[i] = '*';

	a[n] = ' ';
	a[n+1] = '*';

	for(int i=n+2; i<tam; i++)
		a[i] = ' ';

	a[tam-1] = '*';


	b[0] = '*';

	for(int i=1; i<n-1; i++)
		b[i] = ' ';

	b[n-1] = '*';
	b[n] = ' ';
	b[n+1] = '*';

	for(int i=n+2; i<tam; i++)
		b[i] = ' ';

	b[tam-1] = '*';

	for(int i=tam-1; i>=0; i--)
		cout << a[i];

	cout << "\n";
	
	for(int i=1; i<n-1; i++)
	{
		for(auto c:b)
			cout << c;
		cout << "\n";
	}

	for(auto efe:a)
		cout << efe;

	return 0;
}
