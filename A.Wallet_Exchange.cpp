#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string getWinner(int a, int b) { optimize();
    if (a == b) {
        return  "Bob";
    }
    if ((a+b)%2!=0) {
        return "Alice";
    }

    return "Bob";
}

int main() { optimize();
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        string winner = getWinner(a, b);
        cout << winner << endl;
    }

    return 0;
}
