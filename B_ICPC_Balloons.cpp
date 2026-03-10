#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,ans=0;
        cin >> n;
        string s,k="";
        cin >> s;
        for(char ch: s){
            if(k.find(ch) != string::npos){
                ans++;
            } else{
                ans+=2;
                k = k + ch;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
