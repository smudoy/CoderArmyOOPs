#include<iostream>
using namespace std;


/*    Type - 1 :        */
//class Student{
//public:
//string name;
//int age, roll_number;
//string grade;
//};


/*    Type - 2 :       */
//class Student{
//private:
//    string name;
//    int age, roll_number;
//    string grade;
//
//public:
//    void setAge(int a){
//        age = a;
//    }
//    void setName(string s){
//        name = s;
//    }
//    void setRoll(int roll){
//        roll_number = roll;
//    }
//    void setGrade(string S){
//        grade = S;
//    }
//
//    void getName(){
//        cout<<name<<endl;
//    }
//    void getAge(){
//        cout<<age<<endl;
//    }
//};

/*    Type - 3 :       */
//class a{
//    int b; // double f;
//    char c; // int b;
//    double f; // char c;
//};


/*    Type - 4 :       */
class Student{
public:
    string name;
    int age, roll_number;
    string grade;
};
int main(){

/*    Type - 1 :       */
//    Student s1;
//    s1.name = "Udoy";
//    s1.age = 22;
//    s1.grade = "A+";
//    s1.roll_number = 22;
//    cout<<s1.age<<endl;

/*    Type - 2 :       */
//    Student s1;
//    s1.setAge(22);
//    s1.setName("Udoy");
//    s1.setGrade("A+");
//    s1.setRoll(22);
//    s1.getAge();

/*    Type - 3 :       */
//    a obj;
//    cout<<sizeof(obj)<<endl;

/*    Type - 4 :       */
    Student *s = new Student;
    (*s).name = "Udoy";
    (*s).age = 20;
    s->roll_number = 22;
    s->grade = "A+";
    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<(*s).roll_number<<endl;
    cout<<(*s).grade<<endl;
}