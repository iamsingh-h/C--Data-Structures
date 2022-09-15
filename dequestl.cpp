#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(10);
    d.push_front(2);
    
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    
    d.push_front(13);
    d.push_front(145);
    d.push_back(56);
    d.push_back(95);
    d.push_front(32);
    d.pop_back();
    d.pop_front();
    cout<<"element at second index"<<d.at(2)<<endl;
    cout<<"empty"<<d.empty()<<endl;
    
    cout<<"before erasing"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"after erase"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    
    
}
