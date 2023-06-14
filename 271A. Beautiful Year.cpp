#include<bits/stdc++.h>
using namespace std;
int y, cnt[100001], j, d;
bool kt(int n){
	int a = n%10, b = (n/10)%10, c = (n/100)%10, d = (n/1000)%10;
	if (a != b && a != c && a != d && b != c && b != d && c != d) return true;
	else return false;
}
int main(){
	cin >> y;
	y += 1;
	while (kt(y) == false) y++;
	cout << y;
return 0;
}

