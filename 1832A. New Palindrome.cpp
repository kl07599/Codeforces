#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> s;
		set <char> v;
		for (int i = 0; i < (s.length()/2); i++) v.insert(s[i]);
		if (v.size() == 1) cout << "NO\n";
		else cout << "YES\n";
	}
return 0;
}



