#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[25][25];
signed main() {
	a[1][1] = 1;
	for(int i = 1;i <= 21;i++)
		for(int j = (i == 1 ? 2 : 1);j <= 21;j++)
			a[i][j] = a[i-1][j] + a[i][j-1];
	cout << a[21][21] << endl;
	return 0;
}
