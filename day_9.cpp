#include <iostream>
using namespace std;
int factorial(int n){
   if (n <= 1)
        return 1;
   else
       return n*factorial(n-1);
}
int main(){
   int num,result;
   cin>>num;
   result = factorial(num);
   cout<<result<<endl;
   return 0;
}
