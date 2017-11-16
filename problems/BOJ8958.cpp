//source : https://www.acmicpc.net/problem/8958

#include <iostream>
#include <string>
#include <vector>



using namespace std;

int N;

string::iterator i;
vector<int>v;

int main(){

	int accu = 0;
	int point;
	int loop;
	int k;

	string temp;

	cin >>N;
	k = N;
	while(N--){
		cin >>temp;
		i = temp.begin();
		accu = 0;
		point = 0;
		loop = temp.length();

		while(loop--){
			if(*i == 'O'){
				if(accu != 0){
					point += accu;
				}
				point++;
				accu++;
			}else{
				accu = 0;
			}
			i++;		
		}
		v.push_back(point);
	}

	for(int i = 0;i<k;i++){
		cout<<v[i]<<endl;
	}

	return 0;
}