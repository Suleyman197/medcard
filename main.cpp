#include <iostream>
#include <string>

using namespace std;

string encrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        result += char(c + shift);
    }
    return result;
}

string decrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        result += char(c - shift);
    }
    return result;
}

int main() {
    string password;
    const int SHIFT_KEY = 3;

    cout << "Введите пароль: ";
    cin >> password;

    string encrypted = encrypt(password, SHIFT_KEY);
    cout << "Зашифрованный пароль: " << encrypted << endl;

    string decrypted = decrypt(encrypted, SHIFT_KEY);
    cout << "Расшифрованный пароль: " << decrypted << endl;

    return 0;
}
