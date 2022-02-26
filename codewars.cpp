#include "iostream"
#include "vector"
static std::vector<std::vector<int>> multiplication_table(int n){
    std::vector<std::vector<int>> answer;
    for (int i=1;i<=n;i++){
        //vector to store columns
        std::vector<int> column_elements;
        for (int j=1;j<=n;j++){
            int a=j*i;
            column_elements.push_back(a);
        }
        answer.push_back(column_elements);
    }
    return answer;
}
int main(){
    std::string person="Trevor";
    std::string *pointer=&person;
    std::cout<<pointer<<'\n';    
}

// 0787670161