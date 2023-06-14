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
		set <char> v;
		cin >> s;
		for (int i = 0; i < s.length()/2 + 1; i++) v.insert(s[i]);
		if (v.size() == 1) cout << -1 << endl;
		else cout << s.length() - 1 << endl;
	}
return 0;
}



