#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;////// first way to initialize
    //cout<<vec[0];

    vector<int> vec1 ={1,2,3};/// 2ndway to initialize
    cout<<vec1[0];

    vector<int> vec2 (5,0);// 3rd way to initialize but 5 is size and 0  is element of all 5 index

    for(int i: vec2){  // for each loop
        cout<<i<<endl;
    }

    vector<char> ch={'a','b','c','d','e'};
    for(char val: ch){
        cout<<val<<endl;
    }

    // size of vector
    cout<<"size of vec1  "<<vec1.size()<<endl;
    cout<<"size of vec2  "<<vec2.size()<<endl;

    //push in vector

    vector<int> vec3;
    vec3.push_back(25);// function  pushback
    cout<<vec3[0]<<endl;
}