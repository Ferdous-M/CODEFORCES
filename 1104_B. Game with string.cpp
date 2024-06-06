problem link:
https://codeforces.com/contest/1104/problem/B


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

        string s;
        cin>>s;
        stack<char>st;
        int rounds=0;
        for(auto c:s){
            if(!st.empty() and st.top()==c){st.pop();
            ++rounds;}
        else st.push(c);
        }
        if(rounds&1)cout<<"Yes\n";
        else{cout<<"No\n";}
    }
