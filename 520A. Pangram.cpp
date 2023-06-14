#include<bits/stdc++.h>
using namespace std;
string s;
char k;
int n, cnt;
int main(){
	cin >> n;
	while (n--){
		cin >> k;
		s += toupper(k);
	}
	for (int i = 0; i < s.length()-1; i++){
		for (int j = i+1; j < s.length(); j++){
			if (s[i] > s[j]) swap(s[i],s[j]);
		}
	}
	for (int i = 0; i < s.length(); i++)
		if (s[i] != s[i+1]) cnt++;
	if (cnt == 26) cout << "YES\n";
	else cout << "NO\n";
return 0;
}

