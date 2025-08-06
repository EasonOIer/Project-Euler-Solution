#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b) { return a * b / gcd(a, b); }
int main() {
	long long ans = 1; for(int i = 1;i <= 20;i++) ans = lcm(ans, i);
	cout << ans << endl;
	return 0;
}

