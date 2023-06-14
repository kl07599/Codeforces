#include<bits/stdc++.h>
using namespace std;
int t, n, m, k, d;
int main(){
	cin >> t;
	while (t--){
		cin >> n;
		m = n;
		while (m != 0){
			d++;
			if (m > 1000) m = m - (m/1000)*1000;
			else if (m > 100) m = m - (m/100)*100;
			else if (m > 10) m = m - (m/10)*10;
			else if (m > 0) m = 0;
		}
		if (d != 0){
			if (k == 0){
				cout << d << endl;
				k = 1;
			}
			while (n != 0){
				if (n > 1000 && n % 1000 != 0){
					cout << (n/1000)*1000 << " ";
					n = n - (n/1000)*1000;
				}
				else if (n > 100 && n % 100 != 0){
					cout << (n/100)*100 << " ";
					n = n - (n/100)*100;	
				}
				else if (n > 10 && n % 10 != 0){
					cout << (n/10)*10 << " ";
					n = n - (n/10)*10;
				}
				else if (n > 0){
					cout << n << endl;
					n = 0;
				}
			}
		}
		k = 0;
		d = 0;
	}
return 0;
}

