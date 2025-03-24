#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the arra size ";
    cin>>size;
    int arr[size];
    cout<<"enter the array ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"your array is  ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    int target;
    cout<<"enter the target ";
    cin>>target;
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]==target) flag=true;
         }
         if (flag==true) cout<<"target is found ";
         else cout<<"the target is not found";
         
}