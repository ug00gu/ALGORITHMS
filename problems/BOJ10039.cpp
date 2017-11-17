// source : https://www.acmicpc.net/problem/10039

#include <iostream>

using namespace std;






int main(){

	int result = 0;
	int temp;

	for(int i = 0;i<5;i++){
		cin >>temp;
		if(temp<40){
			temp = 40;
		}
		result += temp;
	}

	cout<<result/5;


	return 0;

}