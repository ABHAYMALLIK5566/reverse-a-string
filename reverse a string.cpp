#include<bits/stdc++.h>
using namespace std;

string u_inp;

void user_input()
{
    cout<<"Type Here: ";
    cin>>u_inp;
}

void reverse(string &u_inp, int l, int h)
{
    if (l < h)
    {
        swap(u_inp[l], u_inp[h]);
        reverse(u_inp, l + 1, h - 1);
    }
}
 
int main()
{
    user_input();
 
    reverse(u_inp, 0, u_inp.length() - 1);
    cout << "Reverse of the given string is " << u_inp;
 
    return 0;
}