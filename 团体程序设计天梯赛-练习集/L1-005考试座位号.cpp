#include<iostream>
#include<string>
#include<vector>
struct student{
	char number[14];
	int computer;
	int seat;
}stu;
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<student> stu_vec;
	while(n--){
	    cin >> stu.number >> stu.computer >> stu.seat;
		stu_vec.push_back(stu);
	}
	int m;
	cin >> m;
	int find_computer;
	for(int i = 1; i <= m ; i++){
		cin >> find_computer ;
		for(int j = 0; j < stu_vec.size(); j++){
			if(stu_vec[j].computer == find_computer){
				cout << stu_vec[j].number << " " << stu_vec[j].seat;
			}
		}
		if(i != m)
			cout << endl;
	}
	return 0;
}