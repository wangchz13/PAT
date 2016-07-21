#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	string str_number;
	cin >> str_number;
	map<int,int> map_number;
	for(int i = 0; i < 10; i++)
		map_number[i] = 0;
	int index = 0;
	while(index < str_number.size()){
		map_number[str_number[index]-'0']++;
		index++;
	}
	for(int i = 0; i < map_number.size();i++){
		if(map_number[i] != 0){
			cout << i << ":" << map_number[i];
			if((i+1) != map_number.size())
				cout << endl;
		}
	}
	return 0;
}