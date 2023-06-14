#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
unsigned long long int n, p;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> p;
	if (p % 2 != 0) p--;
	cout << min(p/2,(n-p)/2);
return 0;
}

