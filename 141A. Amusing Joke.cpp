#include<bits/stdc++.h>
using namespace std;
string s, x, t, k;
int main(){
	cin >> s; cin >> x; cin >> t;
	sort(t.begin(),t.end());
	k = s + x;
	sort(k.begin(),k.end());
	if (k == t) cout << "YES\n";
	else cout << "NO\n";
return 0;
}

