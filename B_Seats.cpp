#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.size();
    int count = 0;
    for (char c : s) count += (c == '1');
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            bool blocked = (i > 0 && s[i-1] == '1') || (i+1 < n && s[i+1] == '1');
            if (!blocked) {
                int pos = (i+1 < n) ? i+1 : i;
                s[pos] = '1';
                count++;
                i = pos + 1; 
            }
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << solve(s) << "\n";
    }
}
