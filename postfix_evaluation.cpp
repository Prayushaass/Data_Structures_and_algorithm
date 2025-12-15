#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;
int main()
{
    string postfix;
    cout<<"Enter a postfix Expression"<endl;
    cin>>postfix;
    stack<int>st;
    for(int i=0;i<=postfix.length();i++)
    {
        char ch=postfix[i];
        if(isdigit(ch))
        {
            st.push(ch-'0');   
        }
        else 
        {
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(ch)
            {
                case"+";
                
            }
        }
    }


}
