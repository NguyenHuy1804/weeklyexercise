#include <iostream>
#include <cstring>
using namespace std;

int countOccurrences(const char* subString, const char* mainString) {
    int count = 0;
    const char* pos = mainString;

    // Lặp qua xâu chính để tìm xâu con
    while ((pos = strstr(pos, subString)) != nullptr) {
        count++;
        pos++; // Tiếp tục tìm từ vị trí kế tiếp
    }

    return count;
}

int main(int argc, const char* argv[]) {
    if (argc != 3) {
        cout << "Usage: program <substring> <mainstring>" << endl;
        return 1; // Thông báo lỗi và thoát chương trình
    }

    const char* subString = argv[1];
    const char* mainString = argv[2];

    int occurrences = countOccurrences(subString, mainString);

    cout << "The substring \"" << subString << "\" appears " << occurrences
         << " times in the main string \"" << mainString << "\"." << endl;

    return 0;
}
