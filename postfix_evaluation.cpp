#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;
int power(int base, int exp)
                    {
                        int result = 1;
                        for (int i = 0; i < exp; i++)
                        result *= base;
                        return result;
                    }
int main()
{
    string postfix;
    cout<<"Enter a postfix Expression"<<endl;
    cin>>postfix;
    stack<int>st;
    for(int i=0;i<postfix.length();i++)
    {
        char ch=postfix[i];
        if(isdigit(ch))
        {
            st.push(ch-'0');   
        }
        else 
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(ch)
            {
                case'+':
                    st.push(op2+op1);
                    break;
                case'-':
                    st.push(op2-op1);
                    break;
                case'*':
                    st.push(op2*op1);
                    break;
                case'/':
                    st.push(op2/op1);
                    break;
                case '^':
                    st.push(power(op2, op1));
                    break;
            }
        }
    }
    cout<<st.top();
    return 0;
}
