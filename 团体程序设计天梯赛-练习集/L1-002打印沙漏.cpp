#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,s,i,j = 0,k;
	char p;
	cin >> n >> p;
	s = sqrt((double)((n-1)/2+1));
	for(i = s;i >= 1;i--,j++){
		k = j;
		if(k)
			for(;k > 0;k--)
				cout <<" ";
		for(k = 2*i-1;k>0;k--)
			cout << p;
		cout << endl;
	}
	j -= 2;
	for(i = 2;i <= s;i++,j--){
		int k = j;
		if(k)
			for(;k>0;k--)
				cout <<" ";
		for(k = 2*i-1;k>0;k--)
			cout << p;
		cout << endl;
	}
	cout<<n-2*s*s+1;
	return 0;

}