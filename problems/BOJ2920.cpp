// source : https://www.acmicpc.net/problem/2920

#include <iostream>

using namespace std;

int main(){

	int a;
	int i;
	int num[8];

	for(i=0; i<8;i++){
		cin>>num[i];
	}


	switch(num[0]){
		case 1:
		a = 2;

		for(i=1;i<8;i++){
			if(a++ != num[i]){
				cout<<"mixed";
				return 0;
			}
		}
		cout<<"ascending";
		break;

		case 8:
		a = 7;

		for(i=1;i<8;i++){
			if(a-- != num[i]){
				cout<<"mixed";
				return 0;
			}
		}
		cout<<"descending";
		break;

		default :
		cout<<"mixed";
		break;
	}

return 0;

}
