#include <iostream>
#include <vector>
using namespace std;

vector<int> haulam(10001);
void calcSec();

int main()
{
	calcSec();
	int t, n;
	cin >> t;
	while (t)
	{
		cin >> n;
		cout << haulam[n] << "\n";
		t--;	
	}
	return 0;
}

void calcSec()
{
	haulam[1] = 1;
	haulam[2] = 2;
	haulam[3] = 4;
	for (int i = 4; i < 10001; i++)
		haulam[i] = haulam[i - 1] + 3;
}
