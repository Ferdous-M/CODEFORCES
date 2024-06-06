//bismillah
//problem link: https://codeforces.com/contest/665/problem/C

solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            char c='a';
            while(s[i-1]==c or (i+1<n and s[i+1]==c)){
                ++c;
            }
            s[i]=c;
        }
    }
    cout<<s<<endl;
}
