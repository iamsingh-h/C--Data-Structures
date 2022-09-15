#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> n(5,100);
    l.push_back(10);
    l.push_front(23);
    l.push_back(12);
    
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    
    
}
