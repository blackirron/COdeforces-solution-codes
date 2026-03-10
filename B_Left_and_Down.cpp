#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a, b, k;
        bool p = 0;
        cin >> a >> b >> k;
        long long z = gcd(a,b);
        long long A = a/z, B=b/z;
        if(A<=k && B<=k){
        cout << 1 << endl;
    } else cout << 2 << endl;
}
    return 0;
}
