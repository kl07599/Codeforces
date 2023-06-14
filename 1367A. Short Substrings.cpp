#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n--){
    	cin >> s;
		for (int i = 0; i < s.length() - 1; i += 2) cout << s[i];
		cout << s[s.length() - 1] << endl;
	}
return 0;
}



