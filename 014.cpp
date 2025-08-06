#include <bits/stdc++.h>
using namespace std;
#define int long long
int mx, mxi;
signed main() {
	for(int i = 1;i <= 1000000;i++) {
		int cnt = 0, now = i;
		while(now != 1)
			(now % 2 ? now = 3 * now + 1 : now >>= 1), cnt++;
		if(cnt > mx) mx = cnt, mxi = i;
	} cout << mxi << endl;
	return 0;
}
