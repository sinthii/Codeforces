#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main ()
{
	optimize() ;
int t,q;cin >> t>>q;
map<string ,string>ipName;
for(int i=0;i<t;i++){string name ,ip;cin>>name>>ip;
	ipName[ip]=name;

}
while(q--){
	string s1,ip;cin >> s1>>ip;
	ip.pop_back();
	cout<<s1<<" "<<ip<<"; #"<<ipName[ip]<<endl;
}
    return 0 ;
}