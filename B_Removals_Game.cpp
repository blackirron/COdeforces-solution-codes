#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Added for speed
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> arr1(n), arr2(n);
        for(int i = 0; i < n; i++) cin >> arr1[i];
        for(int i = 0; i < n; i++) cin >> arr2[i];

        bool same = true;
        bool reverse_same = true;

        for(int i = 0; i < n; i++){
            if(arr1[i] != arr2[i]) same = false;
            if(arr1[i] != arr2[n - 1 - i]) reverse_same = false;
        }

        if(same || reverse_same)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }

    return 0;
}
