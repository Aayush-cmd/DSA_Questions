#include<iostream>
#include<string>
using namespace std;

string ReplaceSpace(string str)
{
    string rep ="@40";
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == ' ')
        {
            str.replace(i,1,rep);
        }
    }
    return str;
}
int main()
{
    string str ={"My name is KHAN"};
    cout<<ReplaceSpace(str);
    return 0;

}