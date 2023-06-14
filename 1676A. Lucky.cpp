#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t;
str s;
void solve(){
	cin >> s;
	if (s[0] - '0' + s[1] - '0' + s[2] - '0' == s[3] - '0' + s[4] - '0' + s[5] - '0') cout << "YES\n";
	else cout << "NO\n";
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

