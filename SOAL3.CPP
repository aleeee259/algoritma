#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool cekValid(string ekspresi) {
    stack<char> st;

    for (char c : ekspresi) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (st.empty()) return false;  // tidak ada pasangan
            if (!isMatching(st.top(), c)) return false; // tidak cocok
            st.pop();
        }
    }

    return st.empty(); // harus kosong jika valid
}

int main() {
    string ekspresi;

    cout << "Masukkan ekspresi: ";
    getline(cin, ekspresi);

    if (cekValid(ekspresi))
        cout << "Valid\n";
    else
        cout << "Tidak Valid\n";

    return 0;
}
