#include <iostream>
#include <vector>

using namespace std;
int cuentaBits(int n);

int main()
{
	printf("%d", cuentaBits(4));
	return 0;
}

int cuentaBits(int n)
{
	int contador = 0;
	while(n)
	{
		contador++;
		n >>= 1;
	}
	return contador;
}
