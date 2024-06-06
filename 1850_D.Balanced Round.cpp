//bismillah
//problem link: https://codeforces.com/contest/1850/problem/D

solution:

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,t,a[200009];
int main() {
	cin>>t; 
	while(t--){
		cin>>n>>m;
		for(ll i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1); 
        int ans=0;
		for(int i=1;i<=n;i++){
            int left=i;
            while(abs(a[i]-a[i+1])<=m and i<=n-1){
                i++;
            }
            ans=max(ans,i-left+1);
        }
		
		cout<<n-ans<<endl;
	} 
	return 0;
}
 	   				  	  	 	 	  	 	  					
