#include<iostream>

using namespace std;

int main(){
  int num;
  cin >> num ;
  cout << num << " ";
  while(num!=1){
    if(num%2==1){
      num = num *3 +1;
      cout << num << " ";
      }
    if(num%2==0){
      num = num/2;
      cout << num << " ";
      }
   }
  return 0;
}

