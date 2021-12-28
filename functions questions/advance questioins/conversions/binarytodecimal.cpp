//EXPLAINATION COPY ME LIKHA HAI

#include<iostream>
using namespace std;

int binarytodecimal(int n)
{

int ans=0;
int x=1;
while (n>0)
{
    /* code */
    int y=n%10;
    ans= ans+(x*y);
    x=x*2;
    n=n/10;
}
return ans;


}

 int main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
    return 0;
}
 

