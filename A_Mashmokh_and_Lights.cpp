#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;   
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    vector<int> arr2(n, 0);  
    int occupied = n;  
    for (int i = 0; i < m; i++) {
        int k = arr[i];
        if (k - 1 < occupied) {  
            for (int j = k - 1; j < occupied; j++) {
                arr2[j] = k;
            }
            occupied = k - 1; 
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
