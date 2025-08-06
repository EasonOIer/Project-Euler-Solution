#include <bits/stdc++.h>
using namespace std;
int main() {
	for(int a = 1;a <= 1000;a++) {
		for(int b = 1;b <= 1000;b++) {
			if((a + b) >= 1000) break;
			if(a * a + b * b == (1000 - a - b) * (1000 - a - b)) {
				cout << a * b * (1000 - a - b) << endl; 
			}
		}
	}
	return 0;
}

