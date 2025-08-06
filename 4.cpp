#include <bits/stdc++.h>
using namespace std;
int main() {
	int ans = 0; 
	for(int i = 100;i <= 999;i++) {
		for(int j = 100;j <= 999;j++) {
			string s = to_string(i * j);
			string t = s; reverse(t.begin(), t.end()); 
			if(s == t) ans = max(ans, i * j);
		}
	} cout << ans << endl;
	return 0;
}

