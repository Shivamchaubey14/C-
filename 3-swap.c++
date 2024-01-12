// I have to write a program to swap a values of two variable. like this a = 10, b = 20, b-->10 and a--->20

#include<iostream>

int main(){
    int a = 10;
    int b = 20;
    int c;
    c = b;
    b = a;
    a = c;

    std::cout<<"The value of a is"<<a<<"The value of b is "<<b<<std::endl;

    return 0;
}