#include<bits/stdc++.h>
using namespace std;
#define str string
str kt(str s){
	str t = "";
	for (int i = 0; i < s.length(); i++) t += tolower(s[i]);
	return t;
}
str s, x;
int main(){
	cin >> s; cin >> x;
	if (kt(s) < kt(x)) cout << "-1\n";
	else if (kt(s) > kt(x)) cout << "1\n";
	else cout << "0\n";
return 0;
}
