#include <iostream>
#include <vector>
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
        }
        return {};
    }
};

class Person{
private:
int age;
std::string fName,lName;
public:
Person(){
    age=0;
    fName="";
    lName="";
}
Person(int age,std::string fName,std::string lName){
    age=age;
    fName=fName;
    lName=lName;
}

};
int main(){
    std::vector<int> array={1,2,3,4,5,6};
    int target={5};
    std::vector<int> ans=Solution::twoSum(array,target);
    for (int i:ans){
        std::cout<<i<<" ";
    }
}