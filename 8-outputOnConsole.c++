#include<iostream>

// we use namespace directive to pick up the namespace 
// so if we use namespace std then we no don't need to use the namespace 

using namespace std;

int main(){
    int x = 10;
    int y = 20;
    // these << angle bracket are stream insertion operator
    cout<<"x = "<< x <<endl
        <<"y = "<< y;

    int sales = 95000;
    float stateTax = (sales * 4)/100;
    float countyTax = (sales * 2)/100;
    cout<<"The sales is "<<sales<<endl
        <<"The state tax is"<<stateTax<<endl
        <<"The county tax is "<<countyTax<<endl;
    return 0; 

}