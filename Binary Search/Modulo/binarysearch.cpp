#include <iostream>

using namespace std;

int n;
int num[100002];
int q;

bool busca(int valor){
	bool ret=false;
	int ini=1, fin=n,m;
	while(ini<=fin){
		m=(ini+fin)/2;
		if(num[m]==valor){
			ret=true;
		}
		if(num[m] < valor){
			ini=m+1;
		}
		else{
			fin=m-1;
		}
	}
	return ret;
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>num[i];
	cin>>q;
	for(int i=1; i<=q; i++){
		int valor;
		cin>> valor;
		bool res=busca(valor);
		if(res) cout<<"Yaaay\n";
		else cout<<"Nope :(\n";
	}
}
