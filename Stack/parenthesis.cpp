#include <iostream>
#include <stack>
using namespace std;
//check for balancing of parenthesis in any expression using stack

bool check(string str, int n)
{
    stack<char> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else
        {

            if (s.empty())
                return false;

            if (s.top() == '(')
            {
                if (str[i] == '}' || str[i] == ']')
                    return false;
                else
                    return true;
            }
            if (s.top() == '[')
            {
                if (str[i] == '}' || str[i] == ')')
                    return false;
                else
                    return true;
            }
            if (s.top() == '{')
            {
                if (str[i] == ']' || str[i] == ')')
                    return false;
                else
                    return true;
            }
        }
    }
}

int main()
{
    string str;
    cout << "Enter string to check balance parenthesis = ";
    cin >> str;
    if (check(str, str.length()))
        cout << "Balanced\n";
    else
        cout << "Unbalanced\n";
    return 0;
}