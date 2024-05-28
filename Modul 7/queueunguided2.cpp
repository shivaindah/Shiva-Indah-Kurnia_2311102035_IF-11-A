#include <iostream>

using namespace std;

struct Node
{
    string nama;
    string nim;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = nullptr;
        back = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void enqueue(string nama, string nim)
    {
        Node *newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = nullptr;

        if (isEmpty())
        {
            front = newNode;
            back = newNode;
        }
        else
        {
            back->next = newNode;
            back = newNode;
        }
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Antrian kosong" << endl;
        }
        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int countQueue()
    {
        int count = 0;
        Node *temp = front;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void clearQueue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }

    void viewQueue()
    {
        cout << "Data antrian Mahasiswa: " << endl;
        Node *temp = front;
        int pos = 1;
        while (temp != nullptr)
        {
            cout << pos << ". Nama: " << temp->nama << "|| NIM: " << temp->nim << endl;
            temp = temp->next;
            pos++;
        }
    }
};

int main()
{
    Queue queue;
    int choice;

    do
    {
        cout << "=== Menu Antrian Mahasiswa Telkom ===" << endl;
        cout << "1. Masukkan data" << endl;
        cout << "2. Hapus satu data" << endl;
        cout << "3. Reset data" << endl;
        cout << "4. Tampil data" << endl;
        cout << "5. Keluar" << endl;
        cout << "=====================================\n"
             << endl;
        cout << "Masukkan Pilihan Anda: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string nama, nim;
            cout << "Masukkan Nama Mahasiswa : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM Mahasiswa  : ";
            cin >> nim;
            queue.enqueue(nama, nim);
            cout << "Data berhasil dimasukkan ke dalam antrian" << endl;
            break;
        }
        case 2:
        {
            if (queue.isEmpty())
            {
                cout << "Antrian kosong" << endl;
            }
            else
            {
                queue.dequeue();
                cout << "Data berhasil dihapus dari antrian" << endl;
            }
            break;
        }
        case 3:
        {
            if (queue.isEmpty())
            {
                cout << "Antrian kosong" << endl;
            }
            else
            {
                queue.clearQueue();
                cout << "Data berhasil di-reset" << endl;
            }
            break;
        }
        case 4:
        {
            if (queue.isEmpty())
            {
                cout << "Antrian kosong" << endl;
            }
            else
            {
                queue.viewQueue();
            }
            break;
        }
        case 5:
        {
            cout << "Terima kasih telah menggunakan layanan kami;)" << endl;
            break;
        }
        default:
        {
            cout << "Pilihan yang anda masukkan tidak valid" << endl;
            break;
        }
        }

        cout << endl;

    } while (choice != 5);

    return 0;
}
