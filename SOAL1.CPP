#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int capacity;
    int *arr;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int data) {
        if (isFull()) {
            cout << "Stack penuh! Tidak bisa menambah data.\n";
            return;
        }
        arr[++top] = data;
        cout << "Data " << data << " berhasil ditambahkan.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong! Tidak ada data untuk dihapus.\n";
            return;
        }
        cout << "Data " << arr[top--] << " berhasil dihapus.\n";
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack kosong!\n";
            return;
        }
        cout << "Elemen teratas: " << arr[top] << endl;
    }

    int size() {
        return top + 1;
    }
};

int main() {
    int kapasitas, pilihan, data;

    cout << "Masukkan kapasitas maksimal stack: ";
    cin >> kapasitas;

    Stack st(kapasitas);

    do {
        cout << "\n=== MENU STACK ===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. Size\n";
        cout << "6. Exit\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan data: ";
            cin >> data;
            st.push(data);
            break;

        case 2:
            st.pop();
            break;

        case 3:
            st.peek();
            break;

        case 4:
            cout << (st.isEmpty() ? "Stack kosong\n" : "Stack tidak kosong\n");
            break;

        case 5:
            cout << "Jumlah elemen stack: " << st.size() << endl;
            break;

        case 6:
            cout << "Keluar program.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 6);

    return 0;
}
