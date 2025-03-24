#include <iostream>
using namespace std;

int maxArr(int size,int arr[]){
int max=arr[0];
for(int i=1;i<size;i++){
    if(arr[i]>max) max=arr[i];
}
cout<<"the max element in the array is "<<max;
return max;

}

int main(){
    int size;
    cout<<" enter the size ";
    cin>>size;

    int arr[size];
    cout<<"enter the array "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<" your array is ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

    maxArr(size,arr);

}