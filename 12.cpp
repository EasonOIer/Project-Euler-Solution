#include <bits/stdc++.h>
using namespace std;
bool fac(long long x) {
	int num = 0; for(long long i = 1;i * i <= x;i++) {
		if(x % i == 0) num += 2;
		if(i * i == x) num--; 
	} return num >= 500;
} int main() {
	long long ans = 1; while(!fac((ans + 1) * ans / 2)) ans++;
	cout << (ans + 1) * ans / 2 << endl;
	return 0;
}

