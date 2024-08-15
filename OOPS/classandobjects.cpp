#include <iostream>


using namespace std;

 class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    //setter
    void setname(string name){
        Name = name;
    }
    //getter
    string getName(){
        return Name;
    }
    void setcompany(string company){
        Company = company;
    }
    //getter
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    //getter
    int getAge(){
        return Age;
    }
    void intro(){
        cout << "Name : " << Name + " : "<< "Company: "<< Company + " : "<< " Age : " << Age << endl;

}
//USING CONSTRUCTOR FOR DEFAULT VALUES or as a parameter
    Employee(string name , string company , int age){
    Name = name;
    Company = company;
    Age = age;
}


};

int main(){

Employee employee1 = Employee(" Rachit "," Microsoft ",21);

employee1.intro();

employee1.setAge(24);

cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;


}
