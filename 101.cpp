#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 101;
int x[N], y[N];
int quick_pow(int sum,int k) {
	int ret = 1; while(k) {
		if(k & 1) ret = ret * sum; k >>= 1; sum = sum * sum;
	} return ret;
} int Lagerange(int k,int sum) {
	int ret = 0;
	for(int i = 1;i <= k;i++) {
		int now = y[i];
		int sum1 = 1, sum2 = 1;
		for(int j = 1;j <= k;j++) {
			if(i == j)continue;
			sum1 *= sum - x[j];
			sum2 *= x[i] - x[j];
		}
		ret += now * sum1 / sum2;
	}
	return ret;
} signed main() {
	for(int i = 1;i <= 11;i++) {
		x[i] = i; int cur = 1; y[i] = 1;
		for(int j = 1;j <= 10;j++) {
			cur = -cur;
			y[i] += cur * quick_pow(x[i],j);
		}
	} int ans = 1; for(int i = 2;i <= 10;i++) {
		ans += Lagerange(i,i+1);
	} cout << ans << endl; return 0;
}

