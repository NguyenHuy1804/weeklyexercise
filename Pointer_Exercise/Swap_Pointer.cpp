#include <iostream>
using namespace std;
void swap_pointers(char* &x, char* &y)

{

    char *tmp;

    tmp = x;

    x = y;

    y = tmp;

}

int main()

{

    char a[] = "I should print second";

    char b[] = "I should print first";


    char *s1 = a;

    char *s2 = b;

    swap_pointers(s1,s2);

    cout << "s1 is " << s1 << endl;

    cout << "s2 is " << s2 << endl;

    return 0;

}

// Lý do không in ra đúng: con trỏ ban đầu chưa được truyền tham chiếu (pass by referece)
// mà chỉ là truyền tham trị (pass by value) nên giá trị bên ngoài hàm sẽ không thay đổi
// sửa --> thêm "&" vào bên trong hàm swap