#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int cover;
map<int,int> cover_map ;
int f(int n){
	if(n == 1) return 1;
	else if(n % 2 == 0){
		cover = n/2;
		if(cover_map.find(cover) == cover_map.end())//该数没有被覆盖
			cover_map[cover] = 1;
		f(cover);
	}
	else{
		cover = (3*n + 1)/2;
		if(cover_map.find(cover) == cover_map.end())//该数没有被覆盖
			cover_map[cover] = 1;
		f(cover);
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> input_vec;
	for(int i = 0; i < n; i++){
		int number;
		cin >> number;
		f(number);
		input_vec.push_back(number);
	}
	vector<int> ans_vec;
	for(int i = 0; i < input_vec.size();i++ ){
		if(cover_map.find(input_vec[i]) == cover_map.end())
			ans_vec.push_back(input_vec[i]);
	}
	sort(ans_vec.begin(),ans_vec.end());
	for(int i = ans_vec.size()-1; i >= 0 ; i--){
		cout << ans_vec[i] ;
		if(i != 0)
			cout << " ";
	}
	return 0;
}
