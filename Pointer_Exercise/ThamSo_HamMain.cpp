#include <iostream>
using namespace std;
int main(int argc, const char * argv[]){
    cout << "Number of command-line arguments: " << argc << endl;
    for(int i = 0; i < argc; i++){
      cout << "Argument #" << i << ": _" << argv[i] << "_\n";
      }
      return 0;
}

//Lệnh 1: test-cmd (không tham số nào ngoài tên chương trình).

//Number of command-line arguments: 1
//Argument #0: _test-cmd_

//Lệnh 2: test-cmd first second 3rd (truyền vào 3 tham số)

//Number of command-line arguments: 4
//Argument #0: _test-cmd_
//Argument #1: _first_
//Argument #2: _second_
//Argument #3: _3rd_

//Lệnh 3: test-cmd 1 (1 tham số). Kết quả:

//Number of command-line arguments: 2
//Argument #0: _test-cmd_
//Argument #1: _1_