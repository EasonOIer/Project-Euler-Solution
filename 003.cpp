#include <bits/stdc++.h>
using namespace std;
int main() {
	long long num = 600851475143; long long ans = 0;
	for(long long i = 2;i * i <= num;i++) {
		if(num % i == 0) {
			num /= i, ans = max(ans, i);
		} 
	} cout << max(ans, num) << endl;
	return 0;
}

