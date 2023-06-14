#include<bits/stdc++.h>
using namespace std;
string s, t = "";
int cnt;
int main(){
	getline(cin,s);
	if (s == "{}") cout << "0\n";
	else{
		for (int i = 0; i < s.length(); i++)
		if (s[i] >= 'a' && s[i] <= 'z') t += s[i];
		for (int i = 0; i < t.length()-1; i++){
			for (int j = i+1; j < t.length(); j++){
				if (t[i] > t[j]) swap(t[i],t[j]);
			}
		}
		for (int i = 0; i < t.length(); i++)
			if (t[i] != t[i+1]) cnt++;
		cout << cnt;
	}
return 0;
}

