#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin >> s;
	s = "00" + s;
	for (int i = 0; i < s.length(); i++){
        for (int j = i + 1; j < s.length(); j++){
            for (int k = j + 1; k < s.length(); k++) {
                int a = (s[i] - '0')*100 + (s[j] - '0')*10 + (s[k] - '0');
                if (a % 8 == 0){
                    cout << "YES\n" << a;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
return 0;
}
