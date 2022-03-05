#include <vector>
#include <iostream>
int main(){
    int vectorSize{};
    std::cin>>vectorSize;
    std::vector<int> array{};
    for (int i = 0; i < vectorSize;i++){ 
        int k{};
        std::cin>>k;
        array.push_back(k);
    }
    int q1,q2,q3;
    std::cin>>q1;
    std::cin>>q2>>q3;
    array.erase(array.begin()+(q1-1));
    array.erase(array.begin()+(q2-1),array.begin()+q3-1);
    std::cout<<array.size()<<"\n";
    for (int i = 0; i < array.size();i++){ 
        std::cout<<array.at(i)<<" ";
    }
    return 0;

}