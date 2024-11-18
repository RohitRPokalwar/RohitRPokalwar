#include <iostream>
using namespace std;
void Check(int arr[] , int size){
    bool ifcheck=false;
    for(int i=0 ; i<size ; i++)
    { 
        // 1 2 3
        // return True
        for (int j = i+1; j <size; j++)
        {
            if(arr[i]==arr[j]){
                ifcheck=true;
                // 1 2 3

            }
        }
    }
    if(ifcheck==true) {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
    
    }
void PrintArr(int arr[] , int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter a Element "<<i<<" ";
        cin>>arr[i];
    }
    Check(arr , size);
return 0;
}