#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Size "<<v.capacity()<<endl;
    
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<"Size "<<v.capacity()<<endl;
    cout<<v.at(2)<<endl;
    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    
}
