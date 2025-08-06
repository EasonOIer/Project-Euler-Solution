#include <bits/stdc++.h>
using namespace std;
/*Bigint Template*/
using LL = long long;
const int N = 10005;

struct Int {
	int len, a[N];
	
	Int() {
		memset(a, 0, sizeof a);
		len = 1;
	}
	
	Int& operator = (const string& s) {
		len = s.length();
		for (int i = 0; i < s.length(); ++i)
			a[len - i] = s[i] - '0';
		return *this;
	}
	
	Int& operator = (LL x) {
		return *this = to_string(x);
	}
};

Int operator + (const Int& A, const Int& B) {
	Int C;
	C.len = max(A.len, B.len);
	int sum = 0;
	for (int i = 1; i <= C.len; ++i) {
		if (i <= A.len)
			sum += A.a[i];
		if (i <= B.len)
			sum += B.a[i];
		C.a[i] = sum % 10;
		sum /= 10;
	}
	if (sum)
		C.a[++C.len] = sum;
	return C;
}

bool operator < (const Int& A, const Int& B) {
	if (A.len != B.len)
		return A.len < B.len;
	for (int i = A.len; i >= 1; --i)
		if (A.a[i] != B.a[i])
			return A.a[i] < B.a[i];
	return false;
}

Int operator - (const Int& A, const Int& B) {
	Int C;
	C.len = max(A.len, B.len);
	int d = 0;
	for (int i = 1; i <= C.len; ++i) {
		d += A.a[i];
		if (i <= B.len)
			d -= B.a[i];
		if (d < 0) {
			C.a[i] = d + 10;
			d = -1;
		} else {
			C.a[i] = d;
			d = 0;
		}
	}
	while (C.len > 1 && !C.a[C.len])
		--C.len;
	return C;
}

Int operator * (const Int& A, int b) {
	Int C;
	C.len = A.len;
	if (!b)
		return C = "0";
	LL mul = 0;
	for (int i = 1; i <= C.len; ++i) {
		mul += 1ll * A.a[i] * b;
		C.a[i] = mul % 10;
		mul /= 10;
	}
	while (mul) {
		C.a[++C.len] = mul % 10;
		mul /= 10; 
	}
	return C;
}

Int operator / (const Int& A, int b) {
	Int C;
	C.len = A.len;
	LL r = 0;
	for (int i = C.len; i >= 1; --i) {
		r = r * 10 + A.a[i];
		C.a[i] = r / b;
		r %= b;
	}
	while (C.len > 1 && !C.a[C.len])
		--C.len;
	return C;
}
Int operator * (const Int& A,const Int& B) {
	Int c; c = 0;
	for(int i = 1;i <= B.len;i++) {
		for(int j = 1;j <= A.len;j++) {
			c.a[i+j-1] += A.a[j] * B.a[i];
		}
	}
	for(int i = 1;i < A.len+B.len;i++) {
		if(c.a[i] > 9) {
			c.a[i+1] += c.a[i] / 10;
			c.a[i] %= 10;
		}
	}
	c.len = A.len + B.len;
	while(c.a[c.len] == 0 && c.len > 1) c.len--;
	return c;
}
bool operator == (const Int& A,const Int& B) {
	if(A.len != B.len) return false;
	for(int i = 1;i <= A.len;i++) {
		if(A.a[i] != B.a[i]) return false;
	}
	return true;
}
bool operator <= (const Int& A,const Int& B) {
	return (A < B || A == B);
}
bool operator > (const Int& A,const Int& B) {
	return !(A <= B);
}
bool operator >= (const Int& A,const Int& B) {
	return !(A < B);
}
istream& operator >> (istream &in, Int& x) {
	string s;
	in >> s;
	x = s;
	return in;
}

ostream& operator << (ostream &out, const Int& x) {
	for (int i = x.len; i >= 1; --i)
		out << x.a[i];
	return out;
}
/*Bigint Template*/

int main() {
	Int a; a = "1"; Int b; b = "2";
	for(int i = 1;i <= 1000;i++) {
		a = a * b;
	} int sum = 0;
	for(int i = 0;i <= 1000;i++)
		sum += a.a[i];
	cout << sum << endl;
	return 0;
}
