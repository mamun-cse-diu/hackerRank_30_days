#include<iostream>
using namespace std;
int main()
{
  int n,max,count=0,x;
  max = 0;
  cin>>n;
  while(n>0){
    x = n%2;
    n = n/2;
    if(x==1){
      count++;
    }
    else{
      if(count>max){
        max = count;
      }
      count = 0;
    }
  }
  if(max>=count){
    cout<<max<<endl;
  }
  else{
    cout<<count<<endl;
  }
  return 0;


}
