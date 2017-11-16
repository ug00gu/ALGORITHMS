// source : https://www.acmicpc.net/problem/2577

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

map<int, int> m;
map<int, int>::iterator i_v;

int main (){


	int temp;
	int result;
	int a;
	


	cin >> temp;
	result = temp;
	cin >> temp;
	result *= temp;
	cin >> temp;
	result *= temp;
	

	for(int i = 0;i<10;i++){
		m[i] = 0;
	}


	while(result != 0){
		a = result % 10;
		m[a] += 1;
		result /=10;
	}

	for(int i = 0;i<10;i++){
		cout<<m[i]<<endl;
	}


	return 0;
}








