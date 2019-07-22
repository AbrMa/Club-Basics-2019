#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void count_steps(vector<int> planks)
{
	int k = 0;
	for (int i = 0; i < planks.size() - 2; i++)
		if (((k + 1) < planks[planks.size() - 1]) &&  ((k + 1) < planks[planks.size() - 2]))
			k++;
	cout << k << "\n";
}

int main()
{
	int n, t;
	cin >> t;
	while (t)
	{
		cin >> n;
		vector<int> planks(n);
		for (int i = 0; i < n; i++)
			cin >> planks[i];
		sort(planks.begin(), planks.end());
		count_steps(planks);
		t--;
	}
	return 0;	
}
