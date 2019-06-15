#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> suma(vector<int> u, vector<int>v, int num); 
vector<int> meteVector(vector<int> u, int num);
void imprimeVector(vector<int> u, int n);

int main()
{
	int n = 0;
	cin >> n;
	vector<int> a(n),b(n),c(n+1);
	a = meteVector(a,n);
	b = meteVector(b,n);
	c = suma(a,b,n);
	imprimeVector(c,n);
	return 0;
}

void imprimeVector(vector<int> u, int n)
{
	for(auto a:u)
		cout << a;
	printf("\n");
}

vector<int> meteVector(vector<int> u, int num)
{
	vector<int> v(num);
	int aux = 0;
	for(int i=0; i<num; i++)
	{
		cin >> aux;
		v[i] = aux;
	}
	return v;
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
