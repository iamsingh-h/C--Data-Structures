#include <iostream>
using namespace std;

int main()
{
    int i =10;
    cout<<&i<<endl;
    int*p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    
    float f = 10;
    float *pf = &f;
    
    double d = 122.32;
    double *pd = &d;
   cout<<sizeof(p)<<endl;   //memory allocation for pointer
   
   
   //storage is same 
    cout<<i<<endl;
    cout<<*p<<endl;
    
    i++;
   //same storage 
     cout<<i<<endl;
    cout<<*p<<endl;
    
    
    int a = *p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;
    
///segmentation fault
    int i;
    cout<<i<<endl;
    
    i++;
    cout<<i<<endl;
    
    int *p;
    cout<<p<<endl;
    cout<<*p<<endl;
   


   //pointersarray


    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    
    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;
    cout<<*(a+1)<<endl;
    cout<<1[a]<<endl;

    //difference

    int a[10];
    a[0]=5;
    int*p = &a[0]; 
    
    cout<<a<<endl;
    cout<<p<<endl;
    
    cout<<&p<<endl;
    cout<<&a<<endl;
    
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    
    p=p+1;
    a=a+1; //cannot reassign a no different memory
    p=a+1;
    

    // character pointer
    char str[]="abcde";
    char *pstr="abcde";
    
    int a[] = {1,2,3};
    char b[] = "abc";
    
    cout<<a<<endl;
    cout<<b<<endl;
    
    char *c = &b[0];
    cout<<c<<endl;
    
    char c1 = 'a';
    char *pc =  &c1;
    
    cout<<c1<<endl;
    cout<<pc<<endl;

    //functions

    void print(int *p){
    cout<<*p<<endl;
}

void incrementPointer(int *p){
    p = p+1;
    
}
void increment(int *p){
    (*p)++;
}

int main()
{
   int i = 10;
   int *p=&i;
   print(p);
   cout<<p<<endl;
   incrementPointer(p);
   cout<<p<<endl;
    
    //address is same changes will reflect
   cout<<*p<<endl;
   increment(p);
   cout<<*p<<endl;
   
}

//array is passed as function in array
int sum(int *a,int size){
    int ans =0;
    for(int i =0;i<size;i++){
        ans += a[i];
    }
    return ans;
}

int main()
{
   int a[10];
   cout<<sum(a,10)<<endl;
   cout<<sum(a+3,7)<<endl;   //part of array is passed
}

//double pointer


void increment1(int **P){
    p=p+1;         //no change
}
void increment2(int **p){
    *p=*p+1;       //changes will reflect
}
void increment3(int **p){
    **p = **p+1;  //changes will reflect
}

int i =10;
    
    int *p = &i;
    int **p2 = &p;
    
    cout<<p2<<endl;
    cout<<&p<<endl;
    
    cout<<p<<endl;
    cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
}
