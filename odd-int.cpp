#include <iostream>
#include <vector>
#include<bits/stdc++.h>
class Solution{
public:
static std::vector<int> findOdd(const std::vector<int> &numbers){
    int count{};
    sort(numbers.begin(),numbers.end());
    return numbers;
}
};
int main(){
    std::vector<int> numbers={20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};
    for (int i=0;i<numbers.size();i++){
        std::cout<<i<<" ";
    }
}