#include <iostream>

//ENCAPSULATION : in C++ is defined as the wrapping up of data and information in a single unit. 
//In Object Oriented Programming, 
//Encapsulation is defined as binding together the data and the functions 
//that manipulate them.


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

    //HERE GETTERS AND SETTERS ARE USED TO 
    //TO GIVE ACCESS TO THE VARIABLES WHICH WR WANT TO HIDE

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

