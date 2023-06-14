#include<bits/stdc++.h>
using namespace std;
#define st string
st s, x;
int main(){
	cin >> s; cin >> x;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == x[i]) cout << "0";
		else cout << "1";
	}
return 0;
}

