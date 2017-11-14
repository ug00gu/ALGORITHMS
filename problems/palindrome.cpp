/*
	- problem name
		palindrome
	


	- problem explanation
		Palindrome is  is a word, phrase, number, or other sequence of characters 
		which reads the same backward as forward, such as madam or racecar. 
		
		The fucntion will return the length of the longest palindrome in the input.
		
		The standard input is a word without blank.
		
		If an input doesn't contain any palindrome, return will be 0.		

		Example
			INPUT : level / OUTPUT : 5
			INPUT : ABCDEFABBA / OUTPUT : 4
			INPUT : cake / OUTPUT : 0
	
	
	- data
		2017.10.05
	


	- source
		Class of Algorithm Assignment.2
*/


#include <string>
#include <iostream>

#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))

using namespace std;

int main(){

	int max_length = 0;
	int str_len;
	string sentence;
	string temp_sentence;

	cin>>sentence;

	str_len = sentence.length();	
	for (int j = 0; j < str_len-1; j++){
		for(int i=str_len; i>j; i--){
			temp_sentence = sentence.substr(j,i-j);
			if (temp_sentence == string(temp_sentence.rbegin(), temp_sentence.rend())){
				max_length = MAX(max_length, temp_sentence.length());
			}
		}
	}
	cout<<max_length;

	return 0;
}
