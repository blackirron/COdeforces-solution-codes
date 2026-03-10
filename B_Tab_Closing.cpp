#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        bool p = 0;
        cin >> a >> b >> n;
        if (n * b > a && b < a) {
            p = 1;
        }
        if(p == 1) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
