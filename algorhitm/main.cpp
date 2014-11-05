#include <iostream>
#include<list>
#include<algorithm>

using namespace std;
void someone(string name="tormahiri"){

cout<<name<<endl;
}
int main()
{

    someone();
    int san[5]={1,2,3,4,5};
    string humar[10]={"humar tag bilmayman",


    "turmar is turmar"};
    char question1[] = "What is your name? ";
    cout<<question1<<endl;
    cout<<san[0]<<humar[0]<<endl;
    list<int> li;
    li.push_back(0);
    li.push_back(1);
    for(int i=2; i<7; i++){

        li.push_back(i);
    }
    list<int>::const_iterator it;
    it=min_element(li.begin(),li.end());
    cout<<* it <<""<<endl;
    it=max_element(li.begin(),li.end());
    cout<<*it<<""<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
