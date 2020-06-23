#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,s1,s2;
    int i,j,num;
    cin>>num;
    for(j=0; j<num; j++){
        cin>>str;
        for(i=0; i<str.size(); i++){
            if(i%2==0)
                s1 += str[i];
            else
                s2 += str[i];
        }
        cout << s1 << " " << s2 << endl;
        str.clear();
        s1.clear();
        s2.clear();
    }
    return 0;
}
