#include<iostream>
using namespace std;

bool valid(char ch){
    if( (ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    return 1;
    else{
        return 0;
    }
}

char tolowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
    return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}


bool checkpalindrome(string a){
    int s=0;
    int e= a.length()-1;
    while(s<e){
        if((a[s])!=(a[e])){
            return 0;
        }
        else{
            s++,e--;
        }
    }
    return 1;
}

bool ispalindrome(string s){
   
   //faltu character hata do
   string temp=" ";
   for (int j = 0; j < s.length(); j++)
   {
       /* code */
       if(valid(s[j])){
           temp.push_back(s[j]);
       }
   }
   //lowercase me krdo sbko
for (int j = 0; j <s.length(); j++)
{

    temp[j]=tolowercase(temp[j]);
}
// check palindrome
return checkpalindrome(temp);
}




 int main(){
    
    string a;
 ispalindrome(a);




return 0;
 }
