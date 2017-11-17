// https://www.acmicpc.net/problem/4673

#include <iostream>


using namespace std;


map<int,int>m;
map<int,int>::iterator it;

int main(){

	int result;
	int temp;

	for(int i=0;i<100;i++){
		result = i + i/10 + i%10;
		m[result] = 1;
	}
	for(int i=100;i<1000;i++){
		temp = i;
		result = temp + temp%10;
		temp /= 10;
		result += temp%10;
		result += temp/10;
		m[result] = 1;
	}
	for(int i=1000;i<=10000;i++){
		temp = i;

		result = temp + temp%10;
		temp /= 10;
		result += temp%10;
		temp /= 10;
		result += temp%10;
		result += temp/10;
		m[result] = 1;
	}

	for(int i=0;i<=10000;i++){
		if(m.find(i) == m.end()){
			cout<<i<<endl;
		}		
	}	

	return 0;

}