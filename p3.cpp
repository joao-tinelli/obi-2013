/* This problem can be found at: https://neps.academy/exercise/510 */

#include <bits/stdc++.h>
using namespace std;

typedef pair <int,int> pii;

#define f first
#define s second

int area;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    pii f1, f2, f3;
    cin >> f1.f >> f2.f >> f3.f;

    int v[3] = {f1.f, f2.f, f3.f};
    sort(v,v+3);

    f1.f = v[0];
    f2.f = v[1];
    f3.f = v[2];

    f1.s = v[0] + 200;
    f2.s = v[1] + 200;
    f3.s = v[2] + 200;


    if (f1.f > 0)
        area += (100*f1.f);
    
    if (f2.f > f1.s)
        area += (100*(f2.f - f1.s));

    if (f3.f > f2.s)
        area += (100*(f3.f - f2.s));
    
    if (f3.s < 600)
        area += (100*(600-f3.s));

    cout << area; 

    return 0;
}