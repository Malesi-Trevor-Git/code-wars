#include "iostream"
#include <vector>
#include <bits/stdc++.h>
int main(){
    int vectorSize{};
    std::cin>>vectorSize;
    std::vector<int> arr;
    for (int i = 0; i < vectorSize;i++){
        int k{};
        std::cin>>k;
        arr.push_back(k);
    }
    //sort the vector
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size();i++){
        std::cout<<arr[i]<<" ";
    }



}