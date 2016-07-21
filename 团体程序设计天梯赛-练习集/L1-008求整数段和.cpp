#include<iostream>
#include<string>
using namespace std;
string tr(int m) {
	string res;
	int n = m > 0 ? m : -m;
	do {
		res.insert(0, 1, n % 10 + 48);
		n = n / 10;
	} while (n);
	if (m < 0)
		res.insert(0,1,'-');
	res.insert(0, 5 - res.size(), ' ');
	return res;
}
int main() {
	int A, B, n;
	cin >> A >> B;
	n = B - A + 1;
	for (int i = 1,t; i <= n; i++) {
		t = A + i - 1;
		cout << tr(t);
		if (i % 5 == 0 || i == n)
			cout << endl;
	}
	cout <<  "Sum = " << n*A + n*(n - 1) / 2;
	return 0;
}