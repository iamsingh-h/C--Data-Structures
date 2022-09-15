#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    
    s.push("rahul");
    s.push("sham");
    s.push("ram");
    cout<<"top element "<<s.top()<<endl;
    cout<<"size "<<s.size()<<endl;
    cout<<"empty or not "<<s.empty()<<endl;
        
}
    
