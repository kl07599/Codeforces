#include<bits/stdc++.h>
using namespace std;
#define str string
str st(str s){
	str t;
	for (int i = s.length() - 1; i >= 0; i--) t += s[i];
	return t;
}
str s, t;
int main(){
	cin >> s;
	cin >> t;
	if (t == st(s)) cout << "YES\n";
	else cout << "NO\n";
return 0;
}

