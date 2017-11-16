/*
Problem
	It is said that 90% of frosh expect to be above average in their class. 
	You are to provide a reality check.

Input
	The first line of standard input contains an integer C, the number of test cases. 
	C data sets follow. Each data set begins with an integer, N, the number of people in the class (1 <= N <= 1000). 
	N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100) of a student in the class. 

Output
	For each case you are to output a line giving the percentage of students whose grade is above average, rounded to 3 decimal places.




Example Input
	5
	5 50 50 70 80 100
	7 100 95 90 80 70 60 50
	3 70 90 80
	3 70 90 81
	9 100 99 98 97 96 95 94 93 91

Example Output
	40.000%
	57.143%
	33.333%
	66.667%
	55.556%

source : https://www.acmicpc.net/problem/4344


*/





#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


int student_number;

vector<double> average;
vector<int> point;
vector<double> ::iterator v_d;
vector<int> ::iterator v_i;



int main(){

	int temp;
	int num;
	int sum;
	int count;

	double avg;

	cin >> student_number;

	while(student_number--){

		cin>>num;

		sum = 0;
		count = 0;

		for(int i=0;i<num;i++){
			cin >> temp;

			point.push_back(temp);
			sum += temp;
		}

		avg = (double)sum/num;

		for(v_i = point.begin();v_i != point.end(); v_i++){

			if((*v_i) > avg){
				count ++;
			}
		}
		for(int j=0;j<num;j++){
			point.pop_back();
		}

		avg = (double)count/num;
		avg *= 100;

		average.push_back(avg);

	}

	for(v_d = average.begin(); v_d != average.end(); v_d++){
		printf("%.3f", *v_d);
		cout<<"%"<<endl;
	}

   return 0;
}