#include <iostream>
using namespace std;

size_t my_strlen(const char* a) {
    size_t len = 0;
    while (a[len] != '\0') {
        len++;
    }
    return len;
}

void reverse(char a[]) {   // Ham dao nguoc
    size_t len = my_strlen(a);
    char* reversed = new char[len + 1];
    for (int i = 0; i < len; i++) {
        reversed[i] = a[len - i - 1];
    }
    reversed[len] = '\0';
    for (int i = 0; i <= len; i++) {
        a[i] = reversed[i];
    }
    delete[] reversed;
}

void delete_char(char* a, char c) {  // Ham xoa ki tu trong chuoi
    char* begin = a;
    char* dest = a;
    while (*begin != '\0') {
        if (*begin != c) {
            *dest = *begin;
            dest++;
        }
        begin++;
    }
    *dest = '\0';
}

void pad_right(char *a, int n) {     // Ham don phai
    size_t len = my_strlen(a);
    if (len >= n) return;
    for (size_t i = len; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

void pad_left(char *a, int n) {      // Ham don trai
    size_t len = my_strlen(a);
    for (int i = len - 1; i >= 0; i--) {
        a[i + (n - len)] = a[i];
    }
    for (size_t i = 0; i < n - len; i++) {
        a[i] = ' ';
    }
}

void truncate(char *a, int n) {      // Cat xau
    size_t len = my_strlen(a);
    if (n >= len) return;
    a[n] = '\0';
}

bool is_palindrome(char *a) {        // Kiem tra doi xung
    size_t len = my_strlen(a);
    if (len <= 1) return true;
    for (size_t i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

void trim_left(char *a) {            // Loc trai
    size_t len = my_strlen(a);
    size_t pos = 0;
    while (pos < len && a[pos] == ' ') {
        pos++;
    }
    size_t i = 0;
    while (pos < len) {
        a[i++] = a[pos++];
    }
    a[i] = '\0';
}

void trim_right(char *a) {           // Loc phai
    size_t len = my_strlen(a);
    while (len > 0 && a[len - 1] == ' ') {
        len--;
    }
    a[len] = '\0';
}

int main() {
    char a_reverse[20] = "hello";
    reverse(a_reverse);
    cout << "Dao nguoc: " << a_reverse << endl;

    char a_delete[20] = "helloooo";
    delete_char(a_delete, 'o');
    cout << "Xoa ki tu o: " << a_delete << endl;

    char a_pad_right[20] = "hello";
    pad_right(a_pad_right, 10);
    cout << "Don phai (do dai 10): " << a_pad_right << endl;

    char a_pad_left[20] = "hello";
    pad_left(a_pad_left, 10);
    cout << "Don trai (do dai 10): " << a_pad_left << endl;

    char a_truncate[20] = "hello world";
    truncate(a_truncate, 5);
    cout << "Cat xau (do dai 5): " << a_truncate << endl;

    char a_ispalindrome_1[20] = "12321";
    char a_ispalindrome_0[20] = "world";
    cout << a_ispalindrome_1 << " la palindrome: "
         << (is_palindrome(a_ispalindrome_1) ? "true" : "false") << endl;
    cout << a_ispalindrome_0 << " la palindrome: "
         << (is_palindrome(a_ispalindrome_0) ? "true" : "false") << endl;

    char a_trim_left[20] = "       hello";
    trim_left(a_trim_left);
    cout << "Loc trai: " << a_trim_left << endl;

    char a_trim_right[20] = "hello      ";
    trim_right(a_trim_right);
    cout << "Loc phai: " << a_trim_right << endl;

    return 0;
}
