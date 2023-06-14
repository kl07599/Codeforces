#include<bits/stdc++.h>
using namespace std;
const string n = "codeforces";
string s;
int t, cnt;
int main(){
	cin >> t;
	while (t--){
		cin >> s;
		cnt = 0;
		for (int i = 0; i < s.length(); i++)
			if (s[i] != n[i]) cnt++;
		cout << cnt << endl;
	}
return 0;
}



