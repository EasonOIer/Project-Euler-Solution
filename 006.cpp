#include <bits/stdc++.h>
using namespace std;
int main() {
	int sum1 = 0, sum2 = 0;
	for(int i = 1;i <= 100;i++) sum1 += i * i, sum2 += i;
	cout << abs(sum1 - sum2 * sum2) << endl;
	return 0;
}

