#include<iostream>
#include <vector>
using namespace std;

int solution(vector<int> &vec){
    int ans=0;
    for (int val:vec){
        ans=ans^val;
    }
    return ans;
}

int main(){
    vector<int> vec={4,1,2,1,2};
    solution(vec);
    cout<<solution;
}