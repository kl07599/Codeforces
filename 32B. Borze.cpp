#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '.') cout << 0;
		else if (s[i] == '-'){
			i++;
			if (s[i] == '.') cout << 1;
			else cout << 2;
		}
	}
return 0;
}

