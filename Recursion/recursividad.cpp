#include <iostream>
#include <vector>
#include <string>

int n, k;

using namespace std;
int factorial(int n);
int fibo(int n);
void cadenaInvertida(vector<int> a, int n);
void imprimirLeyenda( string s, int pos );
void vectorLeyenda( vector<int> &a, int pos);
int super_digit( string s, int k);

int main()
{
	//cin >> n >> k;
//	vector<int> a(2,0);	
//	vectorLeyenda(a,0);
//	for ( auto pene : a )
//		cout << pene ;
//	cout << endl;
	return 0;
}

int factorial(int n)
{
	if ( n == 1 || n == 0 )
		return 1;
	return n * factorial(n-1);
}

int fibo(int n)
{
	if ( n == 0 )
		return 0;
	if ( n == 1 )
		return 1;
	return fibo(n-1) + fibo(n-2);
}

void cadenaInvertida(vector<int> a, int n)
{
	if ( n >= 0)
	{
		cout << a[n]; 
		cadenaInvertida(a,n-1);
	}
}

void imprimirLeyenda( string s, int pos )
{
	cout << "Entramos a la llamada " << pos + 1 << endl;
	if ( pos == s.size() )
	{
		cout << "Es el final" << endl;
		return;
	}
	else
	{
		imprimirLeyenda( s, pos + 1 );
		cout << "Termina la función" << endl;
		cout << s[pos];
	}
	cout << " Se acabó el proceso de la llamada " << pos + 1 << endl; 
	return;
}

void vectorLeyenda( vector<int> &a, int pos)
{
	// n = 2, k = 4
	if ( pos == k ) 
		return;
	for ( int i = 0; i < n ; i++ )
		a[i] += 1;
	vectorLeyenda( a, pos+1);
	return;
}

//NO SIRVE 
int super_digit( string s, int k)
{
	int sum = 0;
	for ( int i = 0; i < s.size(); i++ )
		sum += s[i] - '0';
	sum = sum * k;
	string aux = to_string( sum );
	if ( aux.size() > 1 )
		return super_digit( aux, 1 );
	return sum;
}

//int solve( int x, int suma, int pos)
//{
//	if ( suma == x )
//		return 1 
//	if ( pos >= n )
//		return 0;
//	if ( sum > x )
//		return 0;
//	int uno = // seguir con mi número
//	int dos = // avanzar al siguiente número y lo quitas.
//	return uno + dos;
//
//}
