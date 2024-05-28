#include <iostream>

using namespace std;

struct Node
{
    string data;
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

    void enqueue(string data)
    {
        Node *newNode = new Node();
        newNode->data = data;
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
        cout << "Data antrian teller: " << endl;
        Node *temp = front;
        int pos = 1;
        while (temp != nullptr)
        {
            cout << pos << ". " << temp->data << endl;
            temp = temp->next;
            pos++;
        }
    }
};

int main()
{
    Queue queue;
    queue.enqueue("Dila");
    queue.enqueue("Hijry");
    queue.enqueue("Ashofia");
    queue.enqueue("Ayu");
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.dequeue();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;
    queue.clearQueue();
    queue.viewQueue();
    cout << "Jumlah antrian = " << queue.countQueue() << endl;

    return 0;
}
