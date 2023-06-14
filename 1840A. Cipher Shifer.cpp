#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll t, n; str s;
void solve(){
	cin >> n; cin >> s;
	ll j = 0;
	for (int i = 1; i < s.length(); i++){
		if (s[i] == s[j]){
			cout << s[j];
			i++;
			j = i;
		}
	}
	cout << endl;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

