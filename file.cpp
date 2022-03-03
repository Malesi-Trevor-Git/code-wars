#include <iostream>
#include <vector>
class Solution{
public:
static std::vector<int> twoSum(std::vector<int> &arr,int target){
  std::vector<int> answer;
  for (int i=0;i<arr.size()-1;i++){
      int first=arr[i];
      for (int j=i+1;j<arr.size();j++){ 
          int second=arr[j];
          if (first+second==target){
          }
      }
  }  
}
};