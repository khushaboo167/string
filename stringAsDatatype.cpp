// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str="raghav garg";
//     // cout<<str<<endl;
//     // cout<<str[0]<<endl;

//     string s;
//     cout<<"enter the string: "<<endl;
//     cin>>s;
//     // cout<<s;
//     getline(cin,s);
//     cout<<s;
// }



// input a string of length n and count all the vowels in the given string
#include<iostream>
#include<string>
using namespace std;
int main(){
      string str="raghav";
      int count=0;
      int i=0;
      while(str[i] != '\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            count++;
        
        i++;
      }
      cout<<count;
}