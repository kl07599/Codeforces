#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, cnt, d;
int main(){
	cin >> n;
	while (n > 0){
		if (n/100 > 0){
			cnt += n/100;
			d = n/100;
			n -= d*100;
		}
		else{
			d = 0;
			if (n/20 > 0){
				cnt += n/20;
				d = n/20;
				n -= d*20;
			}
			else{
				d = 0;
				if (n/10 > 0){
					cnt += n/10;
					d = n/10;
					n -= d*10;
				}
				else{
					d = 0;
					if (n/5 > 0){
						cnt += n/5;
						d = n/5;
						n -= d*5;
					}
					else{
						if (n > 0){
							cnt += n;
							n = 0;
						}
					}
				}
			}
		}
	}
	cout << cnt;
return 0;
}

