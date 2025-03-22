#include <iostream>
using namespace std;
// int main()  {
//
//     char **s;            //lỗi: khởi tạo con trỏ trỏ tới con trỏ nhưng không cấp phát bộ nhớ hoặc gán cho bất cứ giá trị nào
//
//     char foo[] = "Hello World";
//
//     *s = foo;            //lỗi: *s chưa được khởi tạo nên sẽ gây ra lỗi nếu trở tới vùng nhớ không hợp lệ
//
//     printf("s is %s\n",s);      //lỗi: char** là con trỏ trỏ tới con trỏ nhưng trong prinf lại yêu cầu char* trỏ tới 1 giá trị
//
//     s[0] = foo;        //s chưa được khởi tạo
//
//     printf("s[0] is %s\n",s[0]);
//
//     return(0);
//
// }

// sửa

int main() {
    char **s;
    char foo[] = "Hello World";
    s = new char*;
    *s = foo;                             //*s là con trỏ trỏ tới địa chỉ đầu tiên của foo
    cout << "s is " << *s << endl;
    s[0] = foo;                           //s[0] là con trỏ trỏ tới con trỏ, trỏ vào địa chỉ đầu tiên của foo
    cout << "s[0] is " << s[0] << endl;
    delete[] s;
    return 0;
}