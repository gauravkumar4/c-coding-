#include<iostream>
#include<climits>
using namespace std;

 int main(){
    int n;
    cin>>n;
     
     int array[n];
     for (int i = 0; i < n; i++)
     {
         /* code */
         cin>>array[i];
     }
     
     int maxno=INT_MIN;
     int minno=INT_MAX;

     // INT_MAX---> ye sbse bada no. hota hai c++ me woh khud se le lega
     // INT_MIN---> sbse chota no....
     // isko chalane ke liye ek header file lgana pdta hai #include<climits>

     for (int i = 0; i < n; i++){
    //  if(array[i]>maxno){
    //      maxno=array[i];
    //  }
    maxno=max(maxno,array[i]);
    minno=min(minno,array[i]);
    //  if(array[i]<minno){
    //      minno=array[i];
    //  }
     }
     cout<<"the max no is "<<maxno<<endl;
     cout<<"the min no is "<<minno<<endl;
     
    return 0;
}