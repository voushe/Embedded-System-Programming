#include <iostream> //input and output stream
#include <string>

auto sayHello = [](){//Lambda function
    std::cout<<"Welcome to C++"<<std::endl;
};

int main(){
    sayHello();
    return(0);
}