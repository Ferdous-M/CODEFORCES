https://codeforces.com/contest/977/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k;
    string s,tmp,c;
    map<string,int>mp;
    cin>>n;
    cin>>s;
    j=0;
    for(i=0;i<n;i++){
      c=s.substr(i,2);
      mp[c]++;
      if(mp[c]>j){
        j=mp[c];
        tmp=c;
      }
    }
    cout<<tmp<<endl;
}
