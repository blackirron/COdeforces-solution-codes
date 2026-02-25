#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, A = 0, D = 0;
    cin >>t;
    string s;
    cin >> s;
    for(int i=0; i<t; i++){
        if(s[i] == 'A'){
            A++;
        }else{
            D++;
        }
    }
    if(A > D){
        cout << "Anton";
    }
    else if(A < D){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    return 0;
}
