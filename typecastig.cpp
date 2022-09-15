#include <iostream>
using namespace std;

int main(){
    int i =65;
    char c = i; //implicit typecasting
    cout<<c<<endl;
    
    int *p = &i;
    char *pc = (char*)p; //explicit typecasting
    
    cout<<p<<endl;    //address
    cout<<pc<<endl;   //output:- A
    
    cout<<*p<<endl;          //Output:- 65
    cout<<*pc<<endl;         //Output:- A
    cout<<*(pc + 1)<<endl;    //Output:- NULL
    cout<<*(pc + 2)<<endl;     //Output:- NULL
    cout<<*(pc + 3)<<endl;   //Output:- NULL  
    
}
