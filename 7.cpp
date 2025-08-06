#include <bits/stdc++.h>
using namespace std;
bool isprime(int x) {
	for(int i = 2;i * i <= x;i++) {
		if(x % i == 0) return false;
	} return true;
} int main() {
	int cnt = 0; for(int i = 2;;i++)
		if(isprime(i) && ++cnt == 10001) return cout << i, 0; 
	return 0;
}

