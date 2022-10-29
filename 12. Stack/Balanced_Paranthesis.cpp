#include<iostream>
#include<stack>
using namespace std;

bool paranChecker(string expr){
    stack<char> s;
    char ch;

    for(int i=0;i<expr.length();i++){
        if(expr[i]=='(' || expr[i]=='{' || expr[i] == '['){
            s.push(expr[i]);
            continue;
        }
        if(s.empty())
            return false;
        else{
            if(expr[i] == ')'){
                ch = s.top();
                s.pop();
                if(ch != '('){
                    return false;
                    break;
                }
            }
            else if(expr[i]=='}'){
                ch = s.top();
                s.pop();
                if(ch != '{'){
                    return false;
                    break;
                }
            }
            else{
                ch = s.top();
                s.pop();
                if(ch != '['){
                    return false;
                    break;
                }
            }
        }
    }
    if(s.empty())
        return true;
}

int main(){
    string s;
    cout<<"Input the paranthesis expression: ";
    cin>>s;
    if(paranChecker(s))
        cout<<"Balanced paranthesis\n";
    else
        cout<<"Unbalanced paranthesis\n";
    return 0;
}