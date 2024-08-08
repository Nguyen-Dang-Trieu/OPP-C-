## Reference
- https://unstop.com/blog/this-pointer-in-cpp

Khi 1 đối tượng của lớp được tạo, nó chiếm 1 vùng nhớ cụ thể. Con trỏ "this" trỏ đến địa chỉ của vùng nhớ này, cho phép truy cập dến các thành viên của đối tượng.

**Example 1:**
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

**Example 2:**
~~~cpp
#include <iostream>
using namespace std;

class SimpleClass {
private:
    int number;

public:
    // Hàm khởi tạo
    SimpleClass(int n) : number(n) {}

    // Hàm thành viên để in giá trị
    void showNumber() const {
        cout << "Number: " << number << endl;
    }

    // Hàm thành viên để thay đổi giá trị và gọi hàm khác
    void setNumber(int newNumber) {
        this->number = newNumber; // Sử dụng this để truy cập biến thành viên
        this->displayChange(); // Sử dụng this để gọi hàm thành viên khác
    }

    // Hàm thành viên để hiển thị thông báo thay đổi
    void displayChange() const {
        cout << "Number has been changed to: " << this->number << endl;
    }
};

int main() {
    SimpleClass obj(5);

    // Hiển thị số ban đầu
    obj.showNumber();

    // Thay đổi số và hiển thị thông báo
    obj.setNumber(10);

    return 0;
}
~~~
**OUTPUT:**
~~~cpp
Number: 5
Number has been changed to: 10
~~~

Bai1.c mô tả cách sử dụng con trỏ "this"
