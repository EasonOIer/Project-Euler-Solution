#include <bits/stdc++.h>
using namespace std;
#define int long long
string s[105]; int x[105];
signed main() {
	int sum = 0;
	for(int i = 1;i <= 100;i++) {
		cin >> s[i];
		for(int j = 0;j < 15;j++)
			x[i] = x[i] * 10ll + (s[i][j] - '0');
		sum += x[i];
	} cout << to_string(sum).substr(0, 10) << endl;
	return 0;
}
