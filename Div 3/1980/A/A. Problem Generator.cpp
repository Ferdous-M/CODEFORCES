https://codeforces.com/contest/1980/problem/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    string str;

    cin>> t;

    while(t--){
        cin>> n>> m>> str;

        vector<int> cnt(10, 0);
        for(auto it : str) {
            cnt[it - 'A']++;
        }

        int ans = 0;
        for(int i = 0; i < 7; i++) {
            ans += max(m - cnt[i], 0);
        }

        cout<< ans<< endl;
    }
}
