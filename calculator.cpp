#include <iostream>
using namespace std;

int main(){
    int x,y;
    int sum,diff,product;
    float div;
    cin>>x>>y;
    
    sum = x+y;
    diff = x-y;
    product = x*y;
    div = x/y;

    
    cout<<"The Sum is"<<sum<<endl;
    cout<<"The Difference is"<<diff<<endl;
    cout<<"The Product is"<<product<<endl;
    cout<<"The Quotient is"<<div<<endl;
    

    return 0;
}