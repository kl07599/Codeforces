#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
const int MAXN = 2e5 + 5;

int t, q;
int a[MAXN];
bool marked[MAXN];

bool is_beautiful(int l, int r) {
if (l == r) return true;
bool increasing = true, decreasing = true;
for (int i = l + 1; i <= r; i++) {
if (a[i] < a[i - 1]) increasing = false;
if (a[i] > a[i - 1]) decreasing = false;
}
return increasing || decreasing;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> t;
while (t--) {
cin >> q;
for (int i = 0; i < q; i++) {
cin >> a[i];
marked[i] = false;
}
int start = 0, end = q - 1;
while (start < end && a[start] >= a[end]) {
if (a[start] > a[end]) {
// mark the elements that cannot be moved to the end
for (int i = start + 1; i < q; i++) {
if (a[i] >= a[i - 1]) marked[i] = true;
else break;
}
}
start++;
end--;
}
int prev = a[q - 1];
for (int i = q - 2; i >= start; i--) {
if (marked[i]) break; // this element cannot be moved
if (a[i] > prev) break;
prev = a[i];
}
for (int i = 0; i < start; i++) cout << "0";
for (int i = start; i < q; i++) {
if (prev <= a[i]) {
cout << "1";
prev = a[i];
} else {
cout << "0";
}
}
cout << "\n";
}

return 0;
}

