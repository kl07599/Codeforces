#include<bits/stdc++.h>
using namespace std;
int r, c;
int main(){
	cin >> r >> c;
	for (int i = 1; i <= r; i++){
		if (i % 2 == 1){
			for (int j = 1; j <= c; j++){
				if (j < c) cout << "#";
				else cout << "#\n";
			}
		}
		else{
			if ((i/2) % 2 == 1){
				for (int j = 1; j <= c; j++){
					if (j < c) cout << ".";
					else cout << "#\n";
				}
			}
			else{
				for (int j = 1; j <= c; j++){
					if (j == 1) cout << "#";
					else if (j > 1 && j < c) cout << ".";
					else if (j == c) cout << ".\n";
				}
			}
		}
	}
return 0;
}

