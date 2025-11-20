#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string kalimat;
    stack<char> st;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Push semua karakter ke stack
    for (char c : kalimat) {
        st.push(c);
    }

    // Pop untuk membalik kalimat
    cout << "Kalimat terbalik: ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    cout << endl;
    return 0;
}
