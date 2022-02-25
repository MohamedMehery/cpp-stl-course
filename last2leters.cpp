#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string word ;
    cout <<"\tEnter any word!\t";
    cin>>word;
    string::iterator ps = word.end();
    string s;
    s.push_back(*(ps-1));
    s.push_back(' ');
    s.push_back(*(ps-2));
    cout << "\t" << s<< endl;
    return 0;
}