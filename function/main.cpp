#include <iostream>
#include"bax.h"

using namespace std;
int name(int a,int b){
return (a>b)?a:b;
}
int name(int x){
return x;
}
int main()
{
    cout<<name(24,23) <<endl;
    cout << "Hello world!"<< endl;
    cout<<"yegi function overloading oeprator"<<endl;
    cout<<name(30)<<endl;
    cout<<max("salam","mala")<<endl;
    cout<<way("hay sadirdin")<<endl;
    kim("allah");
    return 0;
}
