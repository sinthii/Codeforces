#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
	optimize() ;
	int t ;cin >> t;map<string,bool>vis;
	while(t--)
	{

		string s;cin >> s;
		if (vis[s]==1)cout<< "YES"<< endl;
		else cout << "NO"<< endl;vis[s]=1;

	}		

	
    return 0 ;
	    }