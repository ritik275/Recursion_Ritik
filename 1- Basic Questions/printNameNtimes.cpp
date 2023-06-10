#include <bits/stdc++.h>
using namespace std;
void printName(int i, int N, string s)
{
    if(i == N)
        return;
    
    cout<<s<<endl;
    printName(i+1, N, s);
}
int main()
{
    int n;
    cout<<"Enter total number of times: ";
    cin>>n;

    cin.ignore(); // Clear the newline character from the input buffer
    
    string str;
    cout<<"Enter your name: ";
    getline(cin, str);//Your name
    
    printName(1, n, str);

}