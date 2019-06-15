#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int cuantosDiferentes( int a, int b );
int cuentaUnos( int n );
int esAliado( int a, int b, int k );
void imprime(vector<int> u);
vector<int> meteVector(vector<int> u , int n);

int main()
{
	int n, m, k, fedor, aux, c = 0;
	scanf( "%d %d %d", &n, &m, &k );
	vector< int > a(m+1);
	a = meteVector( a , m+1);
	fedor = a[m];	
	for ( int i = 0; i < m ; i++ )
	{
		//cout << " los números que se comparan son : " << fedor << " " << a[i] << endl;
		c += esAliado( fedor, a[i], k );
	}
	cout << c << endl;
	return 0;
}

vector<int> meteVector(vector<int> u , int n)
{
	int a = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		u[i] = a;
	}
	return u;
}

void imprime(vector<int> u){
	for(auto a:u){
			cout << a;
	}
	cout << "\n";
}

int cuantosDiferentes( int a, int b )
{
	return cuentaUnos( a ^ b );
}

int cuentaUnos( int n )
{
	int c = 0;
	while ( n )
	{
		c += n & 1;
		n >>= 1;
	}
	return c;
}

int esAliado( int a, int b, int k )
{
	if ( cuantosDiferentes( a , b ) > k )
		return 0;
	else 
		return 1;	
}
