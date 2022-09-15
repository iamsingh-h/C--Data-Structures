#include <iostream>
using namespace std;

class Student{
    public:     //access modifier
    int rollNumber;
    
    private:    //access modifier
    int age;
    
    public:
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
    //create objects statically
    Student s1;
    Student s2;
    
    Student s3,s4,s5;
    
    //create objects dynamically
    Student *s6 = new Student;
    
    s1.rollNumber = 101;
   // s1.age = 24;
   s1.setAge(24);
    
    cout<<s1.getAge()<<endl<<s1.rollNumber<<endl;
    s1.display();
    
    //*s6 derefer
    //(*s6).age = 27;
    (*s6).rollNumber = 104;
     
     //arrow derefer & access properties (same as above)
    //s6 -> age = 27;
    s6 -> rollNumber = 104;
    s6 -> setAge(27);
    
    cout<<"S6 age"<<s6->getAge()<<endl;
    
    (*s6).display();
    s6 -> display();
}
