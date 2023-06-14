#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int a, b, c, d, calo;
str s;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b >> c >> d;
	cin >> s;
	for (int i = 0; i < s.length(); i++){
		switch (s[i]){
			case '1':
				calo += a;
				break;
			case '2':
				calo += b;
				break;
			case '3':
				calo += c;
				break;
			case '4':
				calo += d;
				break;
		}
	}
	cout << calo;
return 0;
}

