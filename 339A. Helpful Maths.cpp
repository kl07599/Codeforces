#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
st kt(st s){
	st t;
	for (int i = 0; i < s.length(); i++)
		if (s[i] >= '0' && s[i] <= '9') t += s[i];
	for (int i = 0; i < t.length()-1; i++){
		for (int j = i+1; j < t.length(); j++){
			if (t[i] > t[j]) swap(t[i],t[j]);
		}
	}
	return t;
}
st s, x;
int main(){
	cin >> s;
	s = kt(s);
	for (int i = 0; i < s.length()-1; i++) cout << s[i] << "+";
	cout << s[s.length()-1];
return 0;
}

