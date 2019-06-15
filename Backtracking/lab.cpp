#include <vector>
#include <iostream>

using namespace std;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool isValid(int x, int y, int n, int m, vector< vector<char> > &mapa, vector< vector<bool> > &visited){
    if(x < 0 || x >= n)
        return false;
    if(y < 0 || y >= m)
        return false;
    if(mapa[x][y] == '#')
        return false;
    if(visited[x][y])
        return false;
    return true;    
}

int dfs(vector< vector<char> > &mapa, vector< vector<bool> > &visited, int x, int y, int n, int m, int xFin, int yFin){
    if(isValid(x, y, n, m, mapa, visited)){
        visited[x][y] = true;
        if(x == xFin && y == yFin){
            return 1;
        }else{
            for(int i=0; i<4; i++){
                int res = dfs(mapa, visited, x+dx[i], y+dy[i], n, m, xFin, yFin);
                if(res > 0){
                    return res+1;
                }
            }
        }
    }    
    return 0;
}

int main(){
    int n,m; cin >> n >> m;
    vector< vector<char> > mapa(n, vector<char>(m));
    vector< vector<bool> > visited(n, vector<bool>(m,false));
    
    int xi,yi, xf,yf;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mapa[i][j];
            if(mapa[i][j] == 'E'){
                xi = i;
                yi = j;
            }
            if(mapa[i][j] == 'S'){
                xf = i;
                yf = j;
            }
        } 
    }
        
    cout << dfs(mapa, visited, xi, yi, n, m, xf, yf) << endl;  
}
