#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int n;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	ll a, max = 0, maxa = 0, min = 0, mina = 100000;
	for (int i = 0; i < n; i++){
    	cin >> a;
    	if (a > maxa){
    		max = i;
			maxa = a;
    	}
    	if (a <= mina){
			min = i;
			mina = a;
		}
	}
	if (max > min) cout << (max - 1) + (n - min) - 1;
	else cout << (max - 1) + (n - min);
return 0;
}

