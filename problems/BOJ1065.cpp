//completed
//https://www.acmicpc.net/problem/1065

#include <iostream>

using namespace std;

int main(){
	
	int input;
	int count =0;
	int a,b,c;
  
	cin>>input;

	if(input < 100){
		cout<<input;

	}else{
		count = 99;
		for(int i = 100;i<=input;i++){
			a = i / 100;        
            b = (i / 10) % 10;  
            c = i % 10;         
			
			if((a-b) == (b-c)){
				count++;
			}
		}
		cout<<count;
	}

	


	return 0;
}