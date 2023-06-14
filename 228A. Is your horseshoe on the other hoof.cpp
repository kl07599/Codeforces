#include<bits/stdc++.h>
using namespace std;
int s[100001], cnt;
int main(){
	for (int i = 0; i < 4; i++) cin >> s[i];
	sort(s,s+4);
	for (int i = 0; i < 4; i++) 
		if (s[i] == s[i+1]) cnt++;
	cout << cnt;
return 0;
}

