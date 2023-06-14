#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int t;
str s;
void solve(){
	cin >> s;
	cout << s[0] -'0' + s[2] - '0' << "\n";
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--) solve();
return 0;
}

