// given two string s and t, return true if t is an anagram of s, and false oterwise
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicswallah";
    string t="phywallahsics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    if(s==t) cout<<true;
    else cout<<false;
}