#include <iostream>
#include <string>
#include <clocale>

using namespace std;

// Шифрование пароля (шифр Цезаря)
string encrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        result += char(c + shift);
    }
    return result;
}
// Расшифровка пароля
string decrypt(const string& text, int shift) {
    string result = "";
    for (char c : text) {
        result += char(c - shift);
    }
    return result;
}
int main() {
    setlocale(LC_ALL, "Russian");

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
