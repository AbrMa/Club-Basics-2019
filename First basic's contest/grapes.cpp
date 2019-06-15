#include <iostream>
#include <vector>

using namespace std;
vector<int> ingresaVector( vector<int> u);
void imprimeVector(vector<int> u);
void agustin(vector<int> u, vector<int> v);
void imprimeRespuesta(vector<int> a, vector<int> b);

int main(){
	vector<int> a(3);
	vector<int> b(3);
	a = ingresaVector(a);
	b = ingresaVector(b);
	imprimeRespuesta(a,b);
	return 0;
}

void agustin(vector<int> u, vector<int> v){

}
vector<int> ingresaVector( vector<int> u){
	int a = 0;
	for(int i = 0; i < 3; i++){
		cin >> a;
		u[i] = a;
	}
	return u;
}

void imprimeVector(vector<int> u){
	for(auto a:u)
		cout << a;
	cout << "\n";
}

void imprimeRespuesta(vector<int> a, vector<int> b){
	int Andrew = 0, Dimitry = 0, Michal = 0;
	if(b[0] >=  a[0]){
		Andrew = 1;
		if((b[0] + b[1] - a[0]) >= a[1]){
		       Dimitry = 1;
		       if((b[0] + b[1] + b[2] - a[0] - a[1]) >= a[2])
			      Michal = 1; 
		}
	}
	if( Andrew == 1 && Dimitry == 1 && Michal == 1)
		printf("YES\n");
	else
		printf("NO\n");
}	
