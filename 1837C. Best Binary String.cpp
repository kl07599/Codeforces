#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main(){
	cin >> t;
	while (t--){
		cin >> s;
		if(s[0] == '?') s[0] = '0';
		for (int i = 0; i < s.length(); i++)
			if(s[i] == '?') s[i] = s[i - 1];
		cout << s << endl;
	}
return 0;
}
