#include<iostream>

using namespace std;

int main()
{
    int n,tp,sum,sum4;
    double t,sum1,sum2,sum3,sum5;
    cin>>t;
    cin>>n;
    cin>>tp;
    sum1 = (t*(n/100.00));
    sum2 = (t*(tp/100.00));
    sum3 = sum1+sum2+t;
    sum4 = sum3;
    sum5 = sum3-sum4;
    if(sum5>=0.50){
        sum4++;
    }
    cout<<sum4<<endl;
    return 0;
}
