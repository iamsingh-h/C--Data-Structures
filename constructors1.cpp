#include <iostream>
using namespace std;

class Student{
    public:     //access modifier
    int rollNumber;
    
    private:    //access modifier
    int age;
    
    public:
    
    //Destructor
    ~Student(){
        cout<<"Destructor called"<<endl;
    }
    
     //constructor
    Student(){
        cout<<"constructor called 1"<<endl;    
    }
     //parameterized constructor because it takes argument
    Student(int r){
        cout<<"Constructor called 2";
        rollNumber = r;
    }
    
    Student(int a, int r){
        cout<<"Constructor called 3"<<endl;
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
    Student s1;   //Constructor 1 called
    
    Student s2(101); //Constructor 2 called
    
    Student s3(20,102); //Constructor 3 called
    
    Student s4(s3);  //Copy Constructor called
    
    s1 = s2;   //Copy Assignment operator
    
    Student s5 = s4;   //Copy Constructor called
    
}
