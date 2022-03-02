#include "iostream"
#include "bits/stdc++.h"
#include "vector"
class Solution{
public:
static std::vector<int> twoSum(std::vector<int> &array,int target){
    for (int i=0;i<array.size()-1;i++){
        int first=array[i];
        for (int j=i+1;j<array.size();j++){
            int second=array[j];
            if (first+second==target){
                return {first,second};
            }
        }
        return {};
    }

};


int main() {
    int j{};
    std::cin>>j;
    std::vector<int> array{};
    for (int i=0;i<j;i++){
        int k{};
        std::cin>>k;
        array.push_back(k);
    }
    int a{};
    std::cin>>a;
    array.erase(array.begin()+(a-1));
    // v.erase (v.begin()+(q1-1));
    int x,y;
    std::cin>>x;
    std::cin>>y;
    array.erase(array.begin()+x-1,array.begin()+y-1);
    //v.erase(v.begin()+q2-1 , v.begin()+q3-1);
    std::cout<<array.size();
    std::vector<int> arr={1,2,3,4,5,6};
    int target=10;
    std::vector<int> ans=Solution::twoSum(arr,target);
    for (int i:ans){
        std::cout<<i<<"\n";
    }
    
}