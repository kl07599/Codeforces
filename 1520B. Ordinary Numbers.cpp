#include<bits/stdc++.h>
using namespace std;
int t, n;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		if (n < 10) cout << n << endl;
		else{
			if (n <= 100){
				if (n / 10 > n % 10) cout << (n / 10) + 8 << endl;
				else cout << (n / 10) + 9 << endl;
			}
			else if (n > 100 && n <= 1000){
				if ((n / 100) * 11 > n % 100) cout << (n / 100) + 17 << endl;
				else cout << (n / 100) + 18 << endl;
			}
			else if (n > 1000){
				if (n < 1111) cout << 27 << endl;
				else{
					if (n / 100 > n % 100) cout << (n / 1000) + 26 << endl;
					else if (n / 100 <= n % 100) cout << (n / 1000) + 27 << endl;
				}
			}
		}
	}
return 0;
}

