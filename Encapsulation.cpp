#include <iostream>
using namespace std;
//Using getters and setters
class Employee{
private:
    int salary;
public:
    void setSalary(int s){
    salary = s;
    }
    int getSalary(){
        return salary;
    }
};


int main(){
Employee worker;
worker.setSalary(5000);//Putting data in the private attribute 'salary'
cout << worker.getSalary();//Accessing into private attributes of class 'Employee'
/*Note: It is a good practice to declare the attributes of a class because it provides to us a better control of our data
, so, we can change one part of the code without affecting other parts, also, it increases the security data*/
return 0;
}
