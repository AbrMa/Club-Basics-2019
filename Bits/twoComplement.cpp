#include <iostream>
#include <bitset>

using namespace std;

int cuentaUnos( int n );

int main()
{
	int v = -5;
	cout << bitset<32>(v);
	return 0;
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

