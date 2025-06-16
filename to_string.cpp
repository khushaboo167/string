#include<iostream>
#include<string>
using namespace std;
int main(){
    // to_string :- convert int to string
    int x=12345;
     string s=to_string(x);
     cout<<s<<endl;

    //  Q. return the total number of digits in a number without using any loop
    int y=1234567;
    string st=to_string(y);
    cout<<st.length();
}