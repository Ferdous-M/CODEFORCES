//https://codeforces.com/contest/1850/problem/C



#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    while(t--){
        string s;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>s[i];
                if (s[i]=='.')continue;
                else cout<<s[i];
            }
        }
        cout<<endl;
    }
}
