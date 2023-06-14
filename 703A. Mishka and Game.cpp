#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t; cin >> t;
	while (t--){
		ll a, b; cin >> a >> b;
		ll cnt = 0, cnt1 = 0;
		if (a > b) cnt++;
		else if (a < b) cnt1++;
	}
	if (cnt > cnt1) cout << "Mishka\n";
	else if (cnt < cnt1) cout << "Chris\n";
	else cout << "Friendship is magic!^^\n";
return 0;
}
