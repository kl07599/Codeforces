#include<bits/stdc++.h>
using namespace std;
int n, A, D;
char s;
int main(){
	cin >> n;
	while (n--){
		cin >> s;
		if (s == 'A') A++;
		else D++;
	}
	if (A > D) cout << "Anton\n";
	else if (A < D) cout << "Danik\n";
	else cout << "Friendship\n";
return 0;
}

