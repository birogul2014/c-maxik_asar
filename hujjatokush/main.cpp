#include <iostream>
#include<fstream>
#include"okush.h"
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
vector<int> vc;
tormahir(vc);
    ofstream outf(file("C:\\biz.txt"));
     if (!outf)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for writing!" << endl;

    }

    // We'll write two lines into this file
    outf <<file("man mana manaddsf") << endl;

    cout << "Hello world!" << endl;
    return 0;
}
