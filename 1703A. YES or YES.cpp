#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll t;
str s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> s;
		for (int i = 0; i < s.length(); i++) s[i] = toupper(s[i]);
		if (s == "YES") cout << "YES\n";
		else cout << "NO\n";
	}
return 0;
}



