#include <iostream>
#include <string>
using namespace std;
int whatDay(string d);
int daysWithoutSchool(string day, int n, int min); 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, min, acDay, iniDay, count = 0;
	string day;
	cin >> n >> day >> min;
	iniDay = whatDay(day);
	while (n)
	{
		cin >> acDay;	
		if (iniDay <= 4 && acDay >= min)
			count++;
		iniDay++;
		iniDay %= 7;
		n--;
	}
	cout << count << "\n";
	return 0;
}

	
int whatDay(string d)
{
	if (d[0] == 'M')
		return 0;
	else if (d[0] == 'T' && d[1] == 'u')
		return 1;
	else if (d[0] == 'W')
		return 2;
	else if (d[0] == 'T')
		return 3;
	else if (d[0] == 'F')
		return 4;
	else if (d[0] == 'S' && d[1] == 'a')
		return 5;
	else
		return 6;
}
