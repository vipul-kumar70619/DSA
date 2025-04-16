//sub array
//kadens algorithm

#include <iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    //cout<<size;

    //lets find out all the sub arrays
    for(int start=0;start<size;start++){
        for(int end=start;end<size;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }
}
