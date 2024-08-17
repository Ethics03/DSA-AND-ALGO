#include <iostream>

//INHERITANCE: is basically specifying that a 
//child class that inherits the attributes of the parent class.

using namespace std;



class AbstractEmployee{
    virtual void AskForPromotion()= 0;
};

 class Employee: AbstractEmployee{
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
    void AskForPromotion(){
        if(Age >=30){
            cout << Name << " got promoted! " << endl;
        }
        else{
            cout << Name << " denied promotion. " << endl;
        }
    }

};

int main(){

Employee employee1 = Employee(" Rachit "," Microsoft ",21);

Employee employee2 = Employee("Naman","Microsoft",32);

employee1.AskForPromotion();
employee2.AskForPromotion();

}