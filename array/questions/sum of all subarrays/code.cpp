  #include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int array[n];
     for (int i = 0; i < n; i++)
     {
        cin>>array[i];
     }
     int currsum=0;
     for (int i = 0; i < n; i++)
     {
        currsum=0;
        for (int j= i; j <(n); j++)
        {
            currsum+=array[j];
            cout<<currsum<<endl;
          }
        
     }
    
     return 0;
}