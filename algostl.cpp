#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6);
    
    int a = 10;
    int b = 5;
    
    cout<<"max of a,b "<<max(a,b)<<endl;
    cout<<"min of a,b "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
    
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string -> "<<abcd<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
}    

