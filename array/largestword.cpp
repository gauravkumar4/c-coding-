#include<iostream>
using namespace std;

 int main(){
    // Largest word in a sentence;
    
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();
    int i=0;
    int currlength=0,maxlength=0;
    int st=0, maxst=0;
     while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currlength > maxlength){
                maxlength=currlength;
                maxst=st;
            }
            currlength=0;
            st=i+1;
        }
        else
        currlength++;
        if (arr[i]=='\0')
        break;

        i++;
     }
    cout<<maxlength<<endl;
    for (int i = 0; i <maxlength; i++)
    {
        /* code */
        cout<<arr[i+maxst];
    }
    
    return 0;
}