#include<iostream>
using namespace std;
int binarysearch(int array[],int n, int key){
int s=0; //s=starting point
int e=n;  //e=ending point

while(s<=e){
    int mid=(s+e)/2;
    if(array[mid]==key){
        return mid;
    }
    else if(array[mid]<key){
        s=mid+1;
     }
else{
    e=mid-1;  
}
}
return -1;
}

 int main(){
   int n;
    cin>>n;

    int array[n];
    for (int i = 0; i <n; i++)
    {
    cin>>array[i];
    }
    int key;
    cin>>key;

    cout<<binarysearch(array,n,key);
    return 0;
}