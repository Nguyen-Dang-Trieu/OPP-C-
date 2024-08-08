## Reference
- https://unstop.com/blog/this-pointer-in-cpp

  
~~~cpp
#include <iostream>
#include <iomanip>  // Thư viện để điều chỉnh định dạng in ra
using namespace std;

class MyClass {
private:
    int value_1;
    uint16_t value_2;
    string value_3;
    uint16_t value_4;
    int value_5;

public:
    // Hàm khởi tạo
    MyClass(int value) : value_1(value) {}

    // Hàm để in ra địa chỉ của đối tượng hiện tại
    void printAddress() {
        cout << "Địa chỉ của đối tượng hiện tại: " << this << endl;
        cout << "Địa chỉ của value_1: " << &value_1 << endl;
        cout << "Địa chỉ của value_2: " << &value_2 << endl;
        cout << "Địa chỉ của value_3: " << &value_3 << endl;
        cout << "Địa chỉ của value_4: " << &value_4 << endl;
        cout << "Địa chỉ của value_5: " << &value_5 << endl;
}

};

int main() {
    MyClass obj(10);
    obj.printAddress();

    return 0;
}
- Tại sao hàm thành viên không có địa chỉ cụ thể ?
~~~
**OUTPUT:**
~~~cpp
~~~
