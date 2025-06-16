#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter string: "<<endl;
    // cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s<<endl;

    // char sh=' ';
    // cout<<int(sh);
    // sort ascii values ke order me sort kr ke deta h
}