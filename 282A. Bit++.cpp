#include<bits/stdc++.h>
using namespace std;
#define str string
str s;
int n, x;
int main(){
	cin >> n;
	while (n--){
		cin >> s;
		if (s == "++X" || s == "X++") x += 1;
		else x -= 1;
	}
	cout << x;
return 0;
}

