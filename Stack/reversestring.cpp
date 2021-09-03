//reverse a string using stack
#include <iostream>
#include <stack>
using namespace std;

string reverse(string s, int n){
    stack <char> rev;
    for (int i=0;i<n;i++)
    rev.push(s[i]);
    for (int i=0;i<n;i++)
    {
        s[i]=rev.top();
        rev.pop();
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter a string to reverse = ";
    cin>>s;
    s=reverse(s, s.length());
    cout<<"Reverse string = "<<s<<"\n";
}