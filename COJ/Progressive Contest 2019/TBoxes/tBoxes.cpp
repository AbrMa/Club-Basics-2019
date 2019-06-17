#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);    
	int n, s, l;
	cin >> n >> s;
	cout << s + s << "\n";
	l = s;
	while (cin >> n)
	{
		if (n < s)
			s = n;
		if ( n > l)
			l = n;
		cout << s + l << "\n";
	}
	return 0;
}
