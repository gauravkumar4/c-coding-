#include<iostream>
#include<array>
using namespace std;

 int main(){
    

    int basic[3]={1,2,3}; //this is basic array definition 

    array<int,4> a={1,2,3,4}; // this is stl srray definition 

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
    
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index---> "<<a.at(2)<<endl;

    cout<<"Empty or not " <<a.empty()<<endl;

    cout<<"First element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
    

    return 0;
}