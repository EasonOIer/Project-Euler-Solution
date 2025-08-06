#include <bits/stdc++.h>
using namespace std;
int isp(int x) {
	for(int i = 2;i * i <= x;i++) {
		if(x % i == 0) return false;
	} return true;
} int main() { long long ans = 0;
	for(int i = 2;i <= 2000000;i++) {
		if(isp(i)) ans += i;
	} cout << ans << endl;
	return 0;
}

