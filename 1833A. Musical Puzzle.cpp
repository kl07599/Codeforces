#include<bits/stdc++.h>
using namespace std;
#define str string
str s;
int t, n;
int main(){
	cin >> t;
	while (t--){
		set<pair<char,char>> st;
		cin >> n;
		cin >> s;
		for (int i = 0; i < s.length() - 1; i++) st.insert({s[i],s[i+1]});
		cout << st.size() << endl;
	}
return 0;
}

