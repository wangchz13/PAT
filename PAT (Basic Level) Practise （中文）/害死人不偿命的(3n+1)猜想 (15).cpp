#include<iostream>
using namespace std;
int count = 0;
int f(int n){
	if(n == 1)
		return count;
	else if(n % 2 == 0){
		count++;
		f(n/2);
	}else{
		count++;
		f((3*n + 1)/2);
	}
}
int main(){
	int number;
	cin >> number;
	cout << f(number);
	return 0;
}