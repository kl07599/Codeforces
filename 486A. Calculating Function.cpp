#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main(){
	cin >> n;
	if (n <= 1) cout << "-1\n";
	else{
		if (n % 2 == 0) cout << n/2;
		else cout << (abs(n)-1)/2 - n;
	}
return 0;
}

