#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int T[20];
int Node[20][2];
int tr(string str) {
	if (str[0] == '-') return -1;
	stringstream ss(str);
	int ans;
	ss >> ans;
	return ans;
}
void f(int i) {
	if (i == -1) return;
	T[Node[i][0]] = 2*T[i] + 1, T[Node[i][1]] = 2*T[i] + 2;
	f(Node[i][0]);
	f(Node[i][1]);
}
int main() {
	int N;
	while (cin >> N) {
		T[20] = { 0 };
		Node[20][2] = { 0 };
		int l, r, head, last, sum = 0;
		string ls, rs;
		for (int i = 0; i < N; i++) {
			cin >> ls >> rs;
			l = tr(ls), r = tr(rs);
			T[l] = T[r] = 1;
			Node[i][0] = l, Node[i][1] = r;
		}
		head = find_if(T, T + N, [](int i) {return i==0; }) - T;
		f(head);
		for (int i = 0; i < N; ++i) {
			sum += T[i];
			if (T[i] == N - 1)
				last = i;
		}
		bool flag = (sum == N*(N - 1) / 2) ? true : false;
		if (flag)
			cout << "YES " << last;
		else
			cout << "NO " << head;
	}
	return 0;
}