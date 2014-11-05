#include <iostream>

#include<string>
#include "tur.h"
using namespace std;
struct haxim{
int age;
string yel;

};
class info{
public:
    string n_name;
    string n_last;
    void setName(string name,string last){
    n_name=name;
    n_last=last;

    }
    void print(){
    cout<<n_name<<endl;
    cout<<n_last<<endl;
    }

};
int main()


{
    bazan bz=bazan(12,23);
    bz.getName();

    info inf;
    inf.setName("tormahiri","sadirdin ablimit");
    inf.print();

    haxim haximak;
    haximak.age=23;
    haximak.yel="2014 yeligu dayman";
      somedata();
    string sourc("hello");
    string str1("sdfsaf");
    cout<<(str1.empty()?"kuruk":"kuruk amas")<<endl;
   cout<<sourc.length()<<endl;
   cout<<haximak.yel<<endl;

    return 0;
}
