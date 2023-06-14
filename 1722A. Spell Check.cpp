#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
const str ans = "Timru";
unsigned long long int t, n;
str s;
void solve(){
	cin >> n; cin >> s;
	if (n != 5) cout << "NO\n";
	else{
		sort(s.begin(),s.end());
		if (s == ans) cout << "YES\n";
		else cout << "NO\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

