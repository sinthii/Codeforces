#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    ll n;
    cin >> n;
    ll a[n];

    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    ll s = 0;
    ll i;
    for (i = 1; i <= n; i++) {
        s += a[i - 1];
        if (s >= (sum + 1) / 2)
            break;
    }

    cout << i << endl;

    return 0;
}