/* This problem can be found at: https://neps.academy/exercise/512 */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50000+10;

int n, m;
bool mark[MAXN];

vector <int> lista[MAXN];

void dfs (int x){
    mark[x] = true;

    for (auto u: lista[x]){
        if (!mark[u])
            dfs(u);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= m; i++){
        int x, y;
        cin >> x >> y;

        lista[x].push_back(y);
        lista[y].push_back(x);
    }

    int qtd_compo = 0;

    for (int i = 1; i <= n; i++){
        if (!mark[i]){
            qtd_compo++;
            dfs(i);
        }            
    }

    cout << qtd_compo;

    return 0;
}