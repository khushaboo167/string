// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<sstream>
// using namespace std;
// int main(){
//     string str="khushaboo is a good girl";
//     stringstream ss(str);
//     string temp;
//     while(ss>>temp){
//         cout<<temp<<endl;
//     }
   
// }




// given a sentence 'str' , return the word that is occurring most number of times in that sentence

// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
// #include<sstream>
// using namespace std;
// int main(){
//     string str="khushaboo is a good girl and she is a cute girl";
//     stringstream ss(str);
//     string temp;
//     vector<string> v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
//    }
//    cout<<endl;
//    sort(v.begin(),v.end());
//    for(int i=0;i<v.size();i++){
//     cout<<v[i]<<endl;
//    }
// }




#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str="math is  raghav is a math teacher.He is a DSA mentor as well as";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;

     sort(v.begin(),v.end());
     int maxCount=1;
     int count=1;
   
   for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxCount=max(maxCount,count);
   }
   
    count=1;
   for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    if(count==maxCount){
        cout<<v[i]<<" "<<maxCount<<endl;
    }
   }
}