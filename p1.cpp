/* This problem can be found at: https://neps.academy/exercise/319 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int vi, t;
    cin >> vi >> t;

    int sum = vi;

    for (int i = 0; i < t; i++){
        int num;
        cin >> num;

        if (sum + num > 100)
            sum = 100;
        else if (sum + num < 0)
            sum = 0;
        else
            sum += num;                
    }

    cout << sum;    

    return 0;
}