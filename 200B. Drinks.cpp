#include<bits/stdc++.h>
using namespace std;
int n, m, p;
double sum;
int main(){
	cin >> n; m = n;
	while (n--){
		cin >> p;
		sum += p;
	}
	cout << fixed << setprecision(12) << sum/m;
return 0;
}

