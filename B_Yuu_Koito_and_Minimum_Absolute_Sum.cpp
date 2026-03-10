#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){cin >> arr[i];}
        if(arr[0]==-1 && arr[n-1]==-1){
            arr[0]=0;
            arr[n-1]=0;
        } else if(arr[0]==-1){
            arr[0]=arr[n-1];
        } else if(arr[n-1]==-1){
            arr[n-1]=arr[0];
        }
        for(int j=0; j<n; j++){
            if(arr[j]==-1) arr[j]=0;
        }
        int sum = arr[n-1] - arr[0];
        cout << abs(sum) << endl;
        for(int k=0; k<n; k++){cout << arr[k] << " ";}
        cout << endl;
    }
    return 0;
}
