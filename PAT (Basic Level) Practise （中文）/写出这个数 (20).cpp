#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	char a;
	int sum = 0;
	while(1){
		cin.get(a);
		if(a != 10){
			sum += (a-'0');
		}else
			break;
	}
	char str[100];
	sprintf(str,"%d",sum);
	for(int i = 0; i <= strlen(str); i++){
		if(i != 0 && i != strlen(str))
			cout << " ";
		switch(str[i]){
		case 48:
			cout << "ling";break;
		case 49:
			cout << "yi";break;
		case 50:
			cout << "er";break;
		case 51:
			cout << "san";break;
		case 52:
			cout << "si";break;
		case 53:
			cout << "wu";break;
		case 54:
			cout << "liu";break;
		case 55:
			cout << "qi";break;
		case 56:
			cout << "ba";break;
		case 57:
			cout << "jiu";break;
		}
	}
	return 0;
}