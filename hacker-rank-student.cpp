#include "iostream"

class Student{
    private:
    int scores[5];
    public:
    void input(){
        for (int i = 0; i < 5;i++){
            std::cin>>scores[i];
        }
    }
    int calculateScore(){
        int count{};
        for (int i = 0; i < 5;i++){
            count += scores[i];
        }
        return count;

    }

};
