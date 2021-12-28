#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int num){
    for (int j = 2; j <=sqrt(num); j++)
    {
        /* code */
        if(num%j==0){
            return false;
        }
    }
    return true;
    
}

 int main(){
     int a,b;
     cin>>a>>b;
     
     for (int i = a; i < b; i++)
     {
         /* code */
         if(isprime(i)==true){
             cout<<i<<endl;
         }
     }
     
    
    return 0;
}