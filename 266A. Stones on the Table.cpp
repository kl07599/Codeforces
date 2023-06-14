#include<bits/stdc++.h>
using namespace std;
string s;
int cnt, n, i;
int main(){
	cin >> n;
	while(n--){
		cin >> s[i];
		i++;	
	}	
	for (int j = 0; j < i; j++)
		if (s[j] == s[j+1]) cnt++;
	cout << cnt;
return 0;
}

