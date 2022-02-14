#include <iostream>

auto add = [](int first_number, int second_number, int sum = 0){//lambda function
    return sum = first_number + second_number;
};

int main(){
    int num1{0};//initialization list
    int num2{0};//initialization list
    std::cout<<"Please enter the first number ::";
    std::cin>>num1;//request user input
    std::cout<<"Please enter the second number ::";
    std::cin>>num2;//request user input
    auto sum = add(num1, num2);//initializes sum with the return value from the lambda add function
    std::cout<<"Sum = "<<sum<<std::endl;
    return(0);
}
