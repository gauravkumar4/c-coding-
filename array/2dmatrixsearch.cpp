
#include<iostream>
using namespace std;

 int main(){
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            /* code */
            cin>>a[i][j];
        }
        
        /* code */
    }

    int r=0 , c=m-1;
    int target;
    cin>>target;
    bool found=false;

while(r<n and c>=0)
    {
        if(a[r][c]==target){
            found=true;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    
    }
    if(found==true){
        cout<<" element is found";
    }
    else{
        cout<<" elememt is not found";
    }
    return 0;
}