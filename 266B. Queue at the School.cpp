#include<bits/stdc++.h>
using namespace std;
#define st string
st s;
char k;
int n, t, i = 1;
int main(){
	cin >> n >> t;
	while (n--){
		cin >> k;
		s += k;
	}
	while (t--){
		for (int i = 1; i < s.length(); i++){
			if (s[i] == 'G' && s[i-1] == 'B'){
				swap(s[i],s[i-1]);
				i++;
			}
		}
	}
	cout << s;
return 0;
}

