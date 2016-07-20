#include<iostream>
#include<stack>
#include<string>
using namespace std;
struct student{
	string name,serial;
	int score;
}stu;
int main(){
	stack<student> stu_stack;
	string name,serial;
	int score;
	int n;
	cin >> n;
	while(n--){
		cin >> name >> serial >> score;
		stu.name = name;
		stu.serial = serial;
		stu.score = score;
		stu_stack.push(stu);
	}
	string max_name = stu_stack.top().name,max_serial = stu_stack.top().serial,min_name = stu_stack.top().name,min_serial = stu_stack.top().serial;
	int max_score = stu_stack.top().score, min_score = stu_stack.top().score;
  	stu_stack.pop();
	for(;!stu_stack.empty();){
		if(stu_stack.top().score > max_score){
			max_score = stu_stack.top().score;
			max_name = stu_stack.top().name;
			max_serial = stu_stack.top().serial;
		}else if(stu_stack.top().score < min_score){
			min_score = stu_stack.top().score;
			min_name = stu_stack.top().name;
			min_serial = stu_stack.top().serial;
		}
		stu_stack.pop();
	}
	cout << max_name << " " << max_serial << endl;
	cout << min_name << " " << min_serial;
	return 0;
}