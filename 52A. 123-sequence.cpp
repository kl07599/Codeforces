#include<bits/stdc++.h>
using namespace std;
int n, a, one, two, three;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a;
		if (a == 1) one++;
		else if (a == 2) two++;
		else if (a == 3) three++;
	}
	cout << n - max(max(one, two),three);
return 0;
}



