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
    cout<<"S1: ";
    s1.display();
    
    Student s2(s1); //Copy Constructor
    cout<<"S2: ";
    s2.display();
    
    Student *s3 = new Student(20,2001);
    cout<<"S3: ";
    s3 -> display();
    
    Student s4(*s3);
    
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1); 
    
     s4.display();
     s5 -> display();
     s6 -> display();
 
    
}
