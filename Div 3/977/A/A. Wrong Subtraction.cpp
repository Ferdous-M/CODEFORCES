https://codeforces.com/contest/977/problem/A

sol 1:
#include<bits/stdc++.h>
using namespace std;
int32_t
main ()
{
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  int n, k, i, j;
  cin >> n >> k;
  while (k--)
    {
      	
		n=n%10?n-1:n/10;
	
    }
  cout << n;
}


sol 2:
#include<bits/stdc++.h>
using namespace std;
int32_t
main ()
{
  ios_base::sync_with_stdio (0);
  cin.tie (0);
  int n, k, i, j;
  cin >> n >> k;
  while (k--)
    {
      if ((n % 10) != 0)
	n--;
      else
	{
	  n /= 10;
	}
    }
  cout << n;
}

