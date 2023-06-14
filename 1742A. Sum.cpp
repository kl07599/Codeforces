#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t; cin >> t;
	while (t--){
		ll a, b, c; cin >> a >> b >> c;
		if (a + b == c || a + c == b || b + c == a) cout << "YES\n";
		else cout << "NO\n";
	}
return 0;
}



