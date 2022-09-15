#include <iostream>
using namespace std;

class Student{
    public:     //access modifier
    int rollNumber;
    
    private:    //access modifier
    int age;
    
    public:
     //constructor
    Student(){
        cout<<"constructor called"<<endl;    
    }
     //parameterized constructor because it takes argument
    Student(int r){
        cout<<"Constructor called!";
        rollNumber = r;
    }
    
    Student(int a, int r){
        cout<<"Constructor called!!"<<endl;
        age=a;
        rollNumber=r;
    }
    
    void display(){
        cout<< age <<" "<< rollNumber<<endl;
        } 
        
        int getAge(){
            return age;
        }
       
       
        void setAge(int a){
        
            if(a<0){
                return;
            }
               age = a; 
        }
};


int main()
{
    
    Student s1(10,1001);
    Student s2(20,2001);
    
    Student *s3 = new Student(30,3001);
    
    s2=s1;
    
    *s3=s1;
    
    s2=*s3;
    
    
   
    s1.display();
    
    s2.display();
    
    s3 -> display();
    
    s2.display();
   
 
    
}
