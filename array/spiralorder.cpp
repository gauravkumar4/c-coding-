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
  //spiral order print

  int top=0 ,bottom=n-1 , left=0, right=m-1;
  while(top<=bottom && left<=right){
      for(int col=left ; col<=right;col++){
          cout<<arr[top][col]<<" ";
      }
      top++;

      for (int row = top; row <= bottom; row++)
      {
          cout<<arr[row][right]<<" ";
      }
      right--;

      for(int col=right ; col>=left;col--){
          cout<<arr[bottom][col]<<" ";
      }
      bottom--;
      for (int row = bottom; row >=top; row--)
      {
          cout<<arr[row][left]<<" ";
      }
      left++;
  }
    return 0;
} 