#include<iostream>
using namespace std;

void display(int a[], int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i];
    }
    cout<<endl;
    return;
}
void change(int b[],int size){
    b[0]=41;
}

int main(){
    
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);

    display(arr,size);
    change(arr,size);
    display(arr,size);
}