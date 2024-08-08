#include <iostream>
using namespace std;
class Person{
  private:
    string name;
    int age;
  public:
    Person(const string &name, int age){
        this->name = name;
        this->age = age;
    }
    // việc sử dụng this->name hay là name đề được vì nó đều hiểu là biến thành viên, tương tự this->age <=> age
    void displayInfo(){
        cout << "Name: " << this->name << endl; // cout << "Name: " << name << endl;
        cout << "Age:" << this->age << endl; // cout << "Age: " << age << endl;
    }
    
    void updateAge(int newAge){
        this->age = newAge;
    }
};

int main(){
    Person person("Armaan", 25);
    person.displayInfo();
    
    person.updateAge(30);
    cout << "After updating age:" << endl;
    person.displayInfo();
    return 0;
}
