#include <iostream>
using namespace std;

struct Node {
    string nama;
    int usia;
    Node* next;
};

class SingleLinkedList {
    private:
        Node* head;
    public:
        SingleLinkedList() {
            head = NULL;
        }
        // Insert node di awal list
        void insertAwal(string nama, int usia) {
            Node* newNode = new Node;
            newNode->nama = nama;
            newNode->usia = usia;
            newNode->next = head;
            head = newNode;
        }
        // Insert node di akhir list
        void insertAkhir(string nama, int usia) {
            Node* newNode = new Node;
            newNode->nama = nama;
            newNode->usia = usia;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
                return;
            }

            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        // Insert node di tengah list
        void insertTengah(string nama, int usia, int pos) {
            Node* newNode = new Node;
            newNode->nama = nama;
            newNode->usia = usia;

            Node* temp = head;
            for (int i = 1; i < pos - 1; i++) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        // Hapus node dengan nama Akechi
        void hapusAkechi() {
            Node* temp = head;
            Node* prev = NULL;

            while (temp != NULL && temp->nama != "Akechi") {
                prev = temp;
                temp = temp->next;
            }

            if (temp == NULL) {
                cout << "Data Akechi tidak ditemukan" << endl;
                return;
            }

            if (prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }

            delete temp;
        }
        // Tambahkan node antara John dan Jane
        void tambahFutaba() {
            Node* temp = head;

            while (temp != NULL && temp->nama != "John") {
                temp = temp->next;
            }

            if (temp == NULL) {
                cout << "Data John tidak ditemukan" << endl;
                return;
            }

            Node* newNode = new Node;
            newNode->nama = "Futaba";
            newNode->usia = 18;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        // Tambahkan node di awal list
        void tambahIgor() {
            Node* newNode = new Node;
            newNode->nama = "Igor";
            newNode->usia = 20;
            newNode->next = head;
            head = newNode;
        }
        // Ubah data Michael menjadi Reyn
        void ubahMichael() {
            Node* temp = head;

            while (temp != NULL && temp->nama != "Michael") {
                temp = temp->next;
            }

            if (temp == NULL) {
                cout << "Data Michael tidak ditemukan" << endl;
                return;
            }

            temp->nama = "Reyn";
            temp->usia = 18;
        }

        // Tampilkan seluruh data
        void tampilData() {
            Node* temp = head;

            if (temp == NULL) {
                cout << "List kosong" << endl;
                return;
            }

            while (temp != NULL) {
                cout << temp->nama << " " << temp->usia << endl;
                temp = temp->next;
            }
        }
};

int main() {
    SingleLinkedList list;

    // Menambahkan data awal
    list.insertAkhir("John", 19);
    list.insertAkhir("Jane", 20);
    list.insertAkhir("Michael", 18);
    list.insertAkhir("Yusuke", 19);
    list.insertAkhir("Akechi", 20);
    list.insertAkhir("Hoshino", 18);
    list.insertAkhir("Karin", 18);

    // Hapus data Akechi
    list.hapusAkechi();

    // Tambahkan data Futaba antara John dan Jane
    list.tambahFutaba();

    // Tambahkan data Igor di awal list
    list.tambahIgor();

    // Ubah data Michael menjadi Reyn
    list.ubahMichael();

    // Tampilkan seluruh data
    list.tampilData();
    return 0;
}
