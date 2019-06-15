#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> meteVector(vector<char> u , int n);
void imprime(vector<char> u);
vector<char> escribeEspacios(vector<char> u , int n);

int main(){
	int n = 0;
	cin >> n;
	vector<char> a(n);
	a = meteVector(a,n);
	a = escribeEspacios(a,n);
	imprime(a);
	return 0;
}	

vector<char> meteVector(vector<char> u , int n){
	char a = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		u[i] = a;
	}
	return u;
}	

void imprime(vector<char> u){
	for(auto a:u){
		if( a != '\0')
			cout << a;
	}
	cout << "\n";
}

vector<char> escribeEspacios(vector<char> u , int n){
	int i = 1, j = 0, a = 1;
	while(i < n && n >= 1){
		for(j = i; j < i+a ; j++)
			u[j] = '\0';
		a++;
		i = j+1;
	}
	
	return u;
}
