#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    string str;
    int n;
    double dd;
    cin>>n;
    cin>>dd;
    cin.ignore();
    getline(cin, str);
    cout<<(n+i)<<endl;
    cout<<fixed<<setprecision(1)<<(d+dd)<<endl;
    cout<<s;
    cout<<str<<endl;


    return 0;
}
