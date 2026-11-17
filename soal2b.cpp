#include <iostream>
using namespace std;

struct Node {
    int nilaiMahasiswa;
    Node* next;
};


int main() {
    system ("cls");
    int n, nilai, nilaiDepan, nilaiBelakang, nilaiTengah;

    cout << "Berapa jumlah data mahasiswanya : ";
    cin >> n;

    cout << endl;

    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan nilai ke-" << i << " : ";
        cin >> nilai;

        Node* nodeBaru = new Node();
        nodeBaru->nilaiMahasiswa = nilai;
        nodeBaru->next = nullptr;

        if (head == nullptr) {
            head = nodeBaru;
            tail = nodeBaru;
        }
        else {
            tail->next = nodeBaru;
            tail = nodeBaru;
        }
    }

    cout << endl;

}