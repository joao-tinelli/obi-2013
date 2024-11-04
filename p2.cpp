/* This problem can be found at: https://neps.academy/exercise/335 */

#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int dist (pair <int,int> M, pair <int,int> R){
    int d = abs(R.x-M.x) + abs(R.y-M.y);
    return d;
}

int main(){
    int mx,my,rx,ry;
    cin >> mx >> my >> rx >> ry;

    cout << dist({mx,my},{rx,ry});
    
    return 0;
}