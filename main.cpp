#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cal(vector <string> str){
  int n = 0;
  int i = 0;
  if(str[1] == "M"){
    if(str.size()<2)
      return -1;
  }
  string str2 = "MOO";
  while(i<str.size()){
    if(str[i]!=str[i]){
      n++;
      i++;
      continue;
    }
    i++;
    continue;
  }
  return n;
}

int main() {
  int n;
  cin>>n;
  vector <string> str;
  for(int i = 0; i<n; i++){
    cin>>str[i];
    cout<<"hello";
    int temp = cal(str);
    cout<<temp;
    str.pop_back();
    // //objective "MOO"
    // //replace first or last letter with opposite
    // //delete first or last letter
    // while(str.size()>2){
      
    // }
  }
  // cout<<char(65+12);
}
/*
3
MOMMOM
MMO
MOO
*/