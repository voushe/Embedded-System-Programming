#include <iostream> //input and output stream
#include <string>

auto sayHello = [](){
    std::cout<<"Welcome to C++"<<std::endl;
};


int main(){
    sayHello();
    [](){//lambda function
        std::cout<<"Hello from lambda"<<std::endl;
    }();
    return(0);
}
