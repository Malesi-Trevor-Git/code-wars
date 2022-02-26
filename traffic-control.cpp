#include "iostream"
//function prototype
void trafficController(int x5){
    if (x5>500){
        std::cout<<"x5 must be <=500"<<"\n";
        return;
    }
    int x1=600-x5;
    int x2=200+x5;
    int x3=400;
    int x4=500-x5;
    std::cout<<"Results "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<"\n";
}
int main(){
    std::cout<<"Enter x5: "<<"\n";
    int x5{};
    std::cin>>x5;
    try{
        trafficController(x5);
    }catch(std::exception& e){
    }
}