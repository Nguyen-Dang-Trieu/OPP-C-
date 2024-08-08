#include <iostream>
using namespace std;

class SimpleClass {
private:
    int value;

public:
    // Hàm khởi tạo
    SimpleClass(int v) : value(v) {}

    // Hàm thành viên const: không thể thay đổi trạng thái của đối tượng
    void setValue_1() const {
        //value = 10;
    }

    // Hàm thành viên không const: có thể thay đổi trạng thái của đối tượng
    void setValue_2() {
        value = 20;
    }
    
    int getValue() const {
        return value;
    }
};

int main() {
    SimpleClass obj1(5);
    cout << "Initial value of obj1: " << obj1.getValue() << endl;
    
    obj1.setValue_1();
    cout << "Value after calling setValue_1(): " << obj1.getValue() << endl;
    
    obj1.setValue_2(); 
    cout << "Value after calling setValue_2(): " << obj1.getValue() << endl;

    
    return 0;
}
