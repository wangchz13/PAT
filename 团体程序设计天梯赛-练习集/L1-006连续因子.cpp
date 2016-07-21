#include <iostream>
using namespace std;
int f(int n, int i) {
	int m = n % i;
	n = n / i;
	if (m != 0||n==0)
		return 0;
	if (n == 1)
		return 1;
	return 1 + f(n, i + 1);
}
int main() {
	int N, max = 0,s;
	cin >> N;
	for (int i = 2,c; i <= N; i++) {
		c = f(N, i);
		if (c > max) {
			max = c;
			s = i;
		}
	}
	cout << max << endl;
	for (int i = 0; i < max; i++) {
		cout << s + i;
		if (i != max - 1)
			cout << "*";
	}
	return 0;
}