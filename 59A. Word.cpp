#include<bits/stdc++.h>
using namespace std;
#define str string
str up(str s){
	str t = ""; 
	for (int i = 0; i < s.length(); i++) t += toupper(s[i]);
	return t;
}
str to(str s){
	str t = "";
	for (int i = 0; i < s.length(); i++) t += tolower(s[i]);
	return t;
}
str st;
int j, k;
int main(){
	getline(cin,st);
	for (int i = 0; i < st.length(); i++){
		if (st[i] >= 'A' && st[i] <= 'Z') j++;
		else k++;
	}
	if (j > k) cout << up(st);
	else cout << to(st);
return 0;
}

