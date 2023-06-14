#include<bits/stdc++.h>
using namespace std;
int t = 3, cnt, d;
string s;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	while (t--){
		getline(cin,s);
		for (int i = 0; i < s.length(); i++)
			if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i') cnt++;
		if (t == 2 || t == 0){
			if (cnt == 5) d++;
		}
		else if (t == 1){
			if (cnt == 7) d++;
		}
		cnt = 0;
	}
	if (d == 3) cout << "YES\n";
		else cout << "NO\n";
return 0;
}



