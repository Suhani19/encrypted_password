#include <iostream>
#include<conio.h>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
string str = "";
char a;
int key;

while(true)
{

    a = _getch();
    if(a == '\r')
    {
        break;
    }
    if(a == '\b')
    {
        cout <<"\b \b";
        str.pop_back();
    }

    else if((a>='A' && a<='Z') || (a>='a' && a<='z') || (a>=0 && a<=9))
    {
        str.push_back(a);
        cout <<"*";
    }

}

for(int i=0;(i<35 && str[i]!='\0');i++)
{
    str[i]=str[i]+2;
}

cout << "\nEncrypted password is --"<<" "<<str<<endl;


cout <<"Enter correct key for decryption - ";
cin>> key;
while(key != 2)
{
  cout<<"Invalid key !\n";
  cout <<"Enter key again ";
  cin>>key;
}
if(key==2)
{
    for(int i=0;(i<35 && str[i]!='\0');i++)
{
    str[i]=str[i]-2;
}
    cout<< "Correct Key!\n Your encrypted password was--\n"<<str<<endl;

}

}
