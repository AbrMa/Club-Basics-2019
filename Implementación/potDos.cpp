#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> suma(vector<int> u, vector<int>v, int num);
void imprimePot(int n);
void imprimeVector(vector<int> u, int n);

int main()
{
	int n;
	cin >> n;
	imprimePot(n);
	return 0;
}

void imprimePot(int n)
{
	vector<int> a {1};
	int tam = a.size();
	int c = 1;
	while ( c <= n )
	{
		a = suma( a, a, tam );
		tam = a.size();
		c++;
	}
	imprimeVector( a, a.size() );
}

void imprimeVector(vector<int> u, int n)
{
        for(auto a:u)
                cout << a;
        printf("\n");
}

vector<int> suma(vector<int> u, vector<int>v, int num)
{
        int acarreo = 0, a = 0, b = 0, sumita = 0;
        vector<int>w(num);
        reverse(u.begin(), u.end());
        reverse(v.begin(), v.end());
        for(int i = 0; i<num; i++)
        {
                 a = u[i];
                 b = v[i];
                 sumita = a+b+acarreo;
                 if(sumita >= 10)
                 {
                         w[i] = sumita%10;
                         acarreo = 1;
                 }
                 else
                 {
                         w[i] = sumita;
                         acarreo = 0;
                 }
        }
        if(acarreo == 1)
                w.push_back(1);
        reverse(w.begin(), w.end());
        return w;
}

