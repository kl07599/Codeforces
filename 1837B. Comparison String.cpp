#include<bits/stdc++.h>
using namespace std;
int t, n, cnt, kq;
string s;
int main(){
	cin >> t;
	while (t--){
		cin >> n; cin >> s;
		cnt = 1, kq = 1;
		for (int i = 1; i < n; i++){
			if (s[i] == s[i-1]) cnt++;
			else{
				kq = max(kq,cnt);
				cnt = 1;
			}
		}
		cout << max(kq,cnt) + 1 << endl;
	}
return 0;
}



