#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int N, M;

vector<string> v;
vector<string> ::iterator i_v;

set<string>s;

int main(){
   
   cin >>N>>M;
   string temp;

   while(N--){
      cin >> temp;
      s.insert(temp);
   }
   while(M--){
      cin >> temp;
      if (!(s.find(temp)==s.end())){
         v.push_back(temp);
      }
   }

   cout<<v.size()<<endl;
   sort(v.begin(),v.end());

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
   }

   return 0;
}