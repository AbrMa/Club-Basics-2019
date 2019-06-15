#include <iostream>
#include <vector>

using namespace std;
vector< vector < int > > adj( 100 );
void sovle( int u, & vector<int> visitados );	

int main()
{
	/*
	 vector< vector <int> > adj
	 cada vector tiene los vectores a los cuales está conectado

	 cin >> n >> u;
	 vvi adj( n );
	 llenar el grafo 
	 for ( int i = 0; i < u; i++ )
	 {
	 	cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	 }
	 
	 hay que marcar los usados

	 1.- LLegamos al nodo
	 2.- Lo marcamos como visitado
	 3.- checamos su adyacencias
	 4.- Lo agregamos a la lista
	 5.- Regresamos 

	 para topar donde vas a tener a los visitados 

	 vector<int> c;
	 void sovle( int u, & vector<int> visitados )
	 {
	 	visitados[u] = true;
		for ( int v : adj[u] )
		{
			int v = adj[u][i];
			if ( !visitados[v] )
				solve( v, visitados );
		}
		c.push_back( u );
		return;
	}
	*/
	cin >> n >> u;
	for ( int i = 0; i < u; i++ )
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
}

void sovle( int u, & vector<int> visitados )	
{
	 	visitados[u] = true;
		for ( int v : adj[u] )
		{
			int v = adj[u][i];
			if ( !visitados[v] )
				solve( v, visitados );
		}
		c.push_back( u );
		return;
}

