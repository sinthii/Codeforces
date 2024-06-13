#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
	optimize() ;
	map<string,int>cnt;
	int t;cin >>t;
	while(t--)
	{
		string s; cin >> s;
		if (cnt[s]==0) cout << "OK"<<endl;
		else cout<<s<<cnt[s]<<endl;
		cnt[s]++;

	}
    return 0 ;
 }