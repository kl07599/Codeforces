#include<bits/stdc++.h>
using namespace std;
#define str string
str s;
int n;
int main(){
	cin >> n;
	while (n--){
		cin >> s;
		if (s.length() <= 10) cout << s << endl;
		else cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
	}
return 0;
}

