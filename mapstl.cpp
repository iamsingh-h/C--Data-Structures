#include <iostream>
#include <map> 
using namespace std;

int main()
{
    map<int,string>m;
    m[1] = "babbbar";
    m[13] = "kumar";
    m[2] = "love";
    
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<m.count(13)<<endl;
    m.erase(13);
    cout<<"after erasing"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}
