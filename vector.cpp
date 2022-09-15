#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> v;
    
    for(int j=0;j<100;j++){
        cout<<"cap:"<<v.capacity()<<endl;
        cout<<"size:"<<v.size()<<endl;
        v.push_back(j+1);
    }
    
    
    //vector<int> *vp = new vector<int>();
   
    v.push_back(10); //insertion at last
    v.push_back(20);
    v.push_back(30);
    
    v[1]=100;
    
    //dont use them for inserting
    //v[3]=1002;
    //v[4]=101;
    
    v.push_back(1003);
    v.push_back(1006);
    
    v.pop_back(); //for deletion at last
    
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<v[5]<<" "<<v[6]<<endl;
    
    //cout<<"Size:"<<v.size()<<endl;
    
    //cout<<v.at(2)<<endl;
    //cout<<v.at(4);
    
    //for(int i=0;i<v.size();i++){
      //  cout<<v.at(i)<<endl;
    //}
    
}
    
    