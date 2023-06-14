#include<bits/stdc++.h>
using namespace std;
#define str string
int kt(str s){
	int d;
	for (int i = 0; i < s.length()-1; i++){
		for (int j = i+1; j < s.length(); j++){
			if (s[i] > s[j]) swap(s[i],s[j]);
		}
	}
	for (int i = 0; i < s.length(); i++)
		if (s[i] == s[i+1]) d++;
	return (s.length() - d);
}
str st;
int main(){
	cin >> st;
	if (kt(st) % 2 == 1) cout << "IGNORE HIM!\n";
	else cout << "CHAT WITH HER!\n";
return 0;
}
