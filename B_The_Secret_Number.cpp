#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        set<long long> solution_set;
        long long p10 = 10;
        for(int i=0; i<18; i++){
            long long divisor = 1 + p10;
            if(n%divisor == 0){
                solution_set.insert(n/divisor);
            }
            p10 *= 10;
        }
        if(solution_set.empty()){
            cout << 0 << endl;
        } else{
                    cout << solution_set.size() << endl;

            for( long long k : solution_set){
            cout << k << " ";
        }
        cout << endl;
        }
    }
    return 0;
}
