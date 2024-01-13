#include<iostream>

int main(){
    /* so the order of precedence in the c++ is taken as a Parantheses will be of heigher precedence then multiplication and devision and so on  */

    double x = 10;;
    double y = 5;
    double z;
    z = (x + 10)/(3 * y);

    std::cout<<z<<std::endl;
}

