#include<iostream>
using namespace std;

 int main(){
    
   int n,m;
   cin>>n>>m;
  int arr[n][m];

  for (int i = 0; i < n; i++)
  {
    /* code */
    for (int j = 0; j < m; j++)
    {
      /* code */
      cin>>arr[i][j];
    }
    
  }
  cout<<"matrix is"<<endl;
  for (int i = 0; i < n; i++)
  {
    /* code */
    for (int j = 0; j< m; j++)
    {
      /* code */
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  
  
    return 0;
}