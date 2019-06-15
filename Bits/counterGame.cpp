#include <iostream>
#include <vector>

using namespace std;

int potDos( long long int n );
int cuentaBits( long long int n );
long long int potMenor( long long int n );
long long int divDos( long long int n );
int quien( long long int n );
int esPar( long long int n );

int main()
{
	long long int t, aux;
	cin >> t;
	vector< long long int > a(t);
	for ( int i = 0; i < t; i++)
	{
		cin >> aux;
		a[i] = aux;
	}

	for ( int i = 0; i < t; i++ )
		quien( a[i] ) ? cout << "Richard\n" : cout << "Louise\n";
	
	return 0;
}

int quien( long long int n )
{
	int alguien = 1; // L = impar, R = par

	if ( n == 1 )
		return 1;
	
	while ( 1 )
	{
		if ( potDos( n ) )
			n = divDos( n );	
		else
		{
			n -= potMenor( n );
		}
		if ( n == 1 )
			return esPar( alguien );
		alguien ++;
	}

}

int esPar( long long int n )
{
	return ~n & 1 ;
}

int potDos( long long int n )
{
	return n && !( n & ( n - 1 ) ) ;
}

int cuentaBits( long long int n )
{
	int c = 0;
	while ( n )
	{
		c++;
		n >>= 1;
	}
	return c;
}

long long int divDos( long long int n )
{
	return n >>= 1;
}
long long int potMenor( long long int n )
{
	long long int pMenor = 1, c = cuentaBits( n );
	return pMenor <<= c - 1;
}
