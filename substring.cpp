#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "raghav";
    cout<<s.substr(1)<<endl; // aghav
    cout<<s.substr(3)<<endl;  // hav
    cout<<s.substr(2,3)<<endl; //gha  (index,len)


    // Q. input a string of even length and return the second half of that string using inbuilt substr function
     string str;
     cout<<"enter string: "<<endl;
     cin>>str;
     int n=str.length();
     cout<<str.substr(n/2);

}