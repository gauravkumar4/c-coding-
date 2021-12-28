#include<iostream>
using namespace std;

 int main(){
    int number,remainder,reverse=0;
    cin>>number;
    while (number>0)
    {
        /* code */
        remainder=number%10;
        number=number/10;
        reverse=reverse*10 + remainder;
    }
    cout<<reverse;
    return 0;
}