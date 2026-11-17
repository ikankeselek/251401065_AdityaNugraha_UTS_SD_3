
#include <iostream>
#include <string>
using namespace std;

struct NodeQ {
    string nama;
    NodeQ* next;
};

class Queue {
    NodeQ *front, *rear;
    int size;
public:
    Queue() : front(nullptr), rear(nullptr), size(0) {}
    ~Queue() { while (front) dequeue(); }

    bool isEmpty() const { return front == nullptr; }

    void enqueue(const string& nama) {
         
        NodeQ* baru = new NodeQ{nama, nullptr};
        if (isEmpty()) front = rear = baru;
        else { rear->next = baru; rear = baru; }
        size++;
    }

    string dequeue() {
        if (isEmpty()) return "";
        NodeQ* hapus = front;
        string nama = hapus->nama;
        front = front->next;
        if (!front) rear = nullptr;
        delete hapus;
        size--;
        return nama;
    }

    void tampil() const {
         
        if (isEmpty()) { cout << "  (antrean kosong)\n"; return; }
        cout << "  FRONT -> ";
        for (NodeQ* p = front; p; p = p->next)
            cout << "[" << p->nama << "] ";
        cout << "<- REAR  (jumlah: " << size << ")\n";
    }
};


void menu() {
    cout << " 1. Enqueue\n"
         << " 2. Dequeue\n"
         << " 3. Tampilkan antrean\n";
}

int main() {
    Queue antrean;


    int pilih;

    do {
        menu();
        if (!(cin >> pilih)) break;
        cin.ignore(1000, '\n');

        switch (pilih) {
        case 1: {
            string nama;
            cout << "Nama : ";
            getline(cin, nama);
            antrean.enqueue(nama);
            cout << "  " << nama << " masuk antrean.\n";
            antrean.tampil();
            break;
        }
        case 2: {
            if (antrean.isEmpty()) { cout << "  Antrean kosong.\n"; break; }
            string nama = antrean.dequeue();
            cout << "  " << nama << " dilayani \n";
            antrean.tampil();
            break;
        }
        case 3:
            antrean.tampil();
            break;
        default:
            cout << "  Pilihan tidak valid.\n";
        }
    } while (pilih != 0);

    return 0;
}
