#include<bits/stdc++.h>
using namespace std;
int a, b, y;
int main(){
	cin >> a >> b;
	while (a <= b){
		a *= 3;
		b *= 2;
		y++;
	}
	cout << y;
return 0;
}

