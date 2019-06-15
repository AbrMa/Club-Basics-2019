// Link to codeforces problem
// https://codeforces.com/problemset/problem/486/A?fbclid=IwAR24tQ83xFIjx0meygGDWUJ_ukHcb9N_GsuFqmXgG62CUsKXKfe7wXfElyQ
#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if(n & 1)
	{
		n += 1;
		n >>= 1;
		cout << ((-1) * n) << "\n";
	}
	else
		cout << (n >> 1) << "\n";
	return 0;
}
