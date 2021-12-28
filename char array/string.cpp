#include<iostream>
using namespace std;

  int main(){

   char name[20]= "gaurav";
    
    
   name[2]='\0';
  cout<<name<<endl; //ga is printing only

 //in cha array it stops printing after it get null vector but in string it just drop that null vector and skips to next part


    
  string str= "gaurav";
  str[2]='\0'; //garav is printed
     
     cout<<str;
return 0;
}