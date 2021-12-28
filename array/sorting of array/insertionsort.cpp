  #include<iostream>
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
      for (int i = 1; i <n; i++)
      {
          /* code */
          int temp=array[i];
          int j=i-1;
          while (j>=0 && array[j]>temp)
          {
              /* code */
              array[j+1]=array[j];
              j--;

          }
          array[j+1]=temp;
      }
      for (int i = 0; i < n; i++)
      {
          /* code */
          cout<<array[i]<<" ";
      }
      cout<<endl;
      
      
      
      return 0;
  }