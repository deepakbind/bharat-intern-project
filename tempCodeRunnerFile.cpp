/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string getBinaryRep(int N)
    {
        string s1, s2;
        while(N != 1)
        {
            int r = N%2;
            char c = r+'0';
            // s1 += c;
            s1 = c + s1;
            N /= 2;
        }
        s1 = '1' + s1;
        // cout<<s1<<" ";
        for(int i=0; i<30-s1.size(); i++)
        {
            s2 += '0';
        }
        string s = s2+s1;
        cout<<s.size()<<endl;
        return s2+s1;
    }

int main()
{
    int n;
    cin>>n;
    cout<<getBinaryRep(n)<<endl;
}
