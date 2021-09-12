#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

//postfix expression evaluation using stack

//considering expression has no error
int eva(string str, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i]!='*' ||str[i]!='+' ||str[i]!='-' ||str[i]!='/')
            s.push(str[i]);
        else
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();
            switch(str[i]){
                case '+': s.push(val2+val1); break;
                case '*': s.push(val2*val1); break;
                case '-': s.push(val2-val1); break;
                case '/': s.push(val2/val1); break;
            }
        }
    }
    return s.top();
}

int main()
{
    string str;
    cout<<"Enter postfix expression : ";
    cin>>str;
    cout<<"Evaluated : "<<eva(str, str.length());
    return 0;
}