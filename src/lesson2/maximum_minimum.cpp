#include <iostream>

int maximum(int a, int b, int c, int max = 0){//a lambda expression that returns the maximum value between a, b, c
    return max = b > c && b > a ? b : c > b && c > a ? c : a;//uses conditional operator
}

int minimum(int a, int b, int c, int min = 0){//a lambda expression that returns the minimum value between a, b, c
    return min = b < c && b < a ? b : c < b && c < a ? c : a;//uses conditional operator
}

int main(){
    int first_number{0};
    int second_number{0};
    int third_number{0};
    int max{0};
    int min{0};
    std::cout<<"Please enter the first number :: ";
    std::cin>>first_number;//request user input
    std::cout<<"Please enter the second number :: ";
    std::cin>>second_number;//request user input
    std::cout<<"Please enter the third number :: ";
    std::cin>>third_number;
    max = maximum(first_number, second_number, third_number);//calling the lambda expression
    min = minimum(first_number, second_number, third_number);//calling the lambda expression
    std::cout<<"Maximum = "<<max<<std::endl;
    std::cout<<"Minimum = "<<min<<std::endl;
    return(0);
}
