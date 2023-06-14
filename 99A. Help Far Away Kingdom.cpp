#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	string s;
    cin >> s;
    n = s.find('.');
    if (s[n - 1] == '9') cout << "GOTO Vasilisa.";
    else{
        if (s[n + 1] >= '5') s[n - 1] += 1;
        s.erase(s.begin() + n, s.end());
        cout << s;
    }
return 0;
}



