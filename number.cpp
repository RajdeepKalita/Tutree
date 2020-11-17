#include <iostream>
using namespace std;

int main(){
  int t=7;
  for(int i=0;i<7;i++){
    for(int j=i+1;j<=7;j++){
        cout<<j<<' ';
    }
    cout<<endl;

  }
  for(int i=1;i<7;i++){
    for(int j=7-i;j<=7;j++){
        cout<<j<<' ';
    }
    cout<<endl;
  }
  return 0;




}
