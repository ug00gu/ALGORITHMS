// source : https://www.acmicpc.net/problem/1110

#include <iostream>

using namespace std;

int main(){
	
	int origin;
	int sum;
	int new_num;

	int ten;
	int one;

	int count=0;

	cin>>origin;

	new_num = origin;

	do{
		ten = new_num / 10;
		one = new_num % 10;
		sum = ten + one;
		new_num = one * 10 + sum%10;
		count ++;
	}while(origin != new_num);
	

	cout<<count;


	return 0;
}