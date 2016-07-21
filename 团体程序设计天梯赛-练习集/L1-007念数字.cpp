#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		switch (str[i]) {
		case '-':
			cout << "fu"; break;
		case 48:
			cout << "ling"; break;
		case 49:
			cout << "yi"; break;
		case 50:
			cout << "er"; break;
		case 51:
			cout << "san"; break;
		case 52:
			cout << "si"; break;
		case 53:
			cout << "wu"; break;
		case 54:
			cout << "liu"; break;
		case 55:
			cout << "qi"; break;
		case 56:
			cout << "ba"; break;
		case 57:
			cout << "jiu"; break;
		}
		if (i != str.size() - 1)
			cout << " ";
	}
	return 0;
}