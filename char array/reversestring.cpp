#include<iostream>
using namespace std;

bool reverse(string s){
    for (int i = 0; i <s.length() ; i++)
    {
        if((s[i]= ' ')|| (s[i]= ' \0')){
        int s=0;
    int e= s.length()-1;
    while(s<e){
        swap(s[s++],s[e--]);
    }
        }
    }
    
   
}
 int main(){
    string s;
    cin>>s;
    return 0;
}