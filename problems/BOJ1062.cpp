/*
source : https://www.acmicpc.net/problem/4344
*/

#include <iostream>
#include <string>

using namespace std;



void split_word(string str, int& index, int a){

	int len = str.length();
	char com_char = 'a';
	int count = 0;

	for(int i=0;i<len;i++){
		for(int j=0; j<26;j++){
			if(str[i] == com_char){
				count ++;
				com_char++;
				index[a][j] = 1;
			}
		}
	}
}


int main(){

	string input;

	int sentence_number, word_number;
	
	int len;
	int count = 1;
	
	int index[50][26] = {0,};

	//
	char a ='a';
	//

	cin>>sentence_number>>word_number;

	for(int i=0;i<sentence_number;i++){

		getline(cin,input);

		len = input.length();
		input = input.substr(4,len-1);
		len = input.length();	
		input = input.substr(0,len-4);
		
		split_word(input, index, i);
	}

	for(int i=0;i<sentence_number;i++){
		for(int j=0;j<26;j++){
			cout<<a++<<" : "<< index[i][j] <<endl;
		}
		cout<<endl;
	}


	return 0;
}


