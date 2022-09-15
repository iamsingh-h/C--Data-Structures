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
     Student s1;
     s1.display();
     
     Student *s3 = new Student;
     s3 -> display();

    cout<<"parameterized Constructor demo"<<endl;
    Student s4(10);
    
    s4.display();
    
    Student *s5 = new Student(101);
    s5 -> display();
    
    Student s6(10,101);
    
    s6.display();
    
    
}
