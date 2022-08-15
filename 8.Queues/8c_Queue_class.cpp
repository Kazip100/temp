#include <iostream>
using namespace std;
 
class Queue
{
private:
    int size;
    int front;
    int rear;
    int* Q;
public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new int[size];        
    }

    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new int[this->size];

    }
    
    
    void enqueue(int x);
    int dequeue();
    void display();
};
 
 
 
void Queue::enqueue(int x) 
{
    if (rear == size-1)
    {
        cout << "Queue Full" << endl;
    } 
    else 
    {
        rear++;
        Q[rear] = x;
    }
}
 
int Queue::dequeue() 
{
    int x = -1;
    if (front == rear)
    {
        cout << "Queue is Empty" << endl;
    } 
    else 
    {        
        x = Q[front+1];
        front++;
    }
    return x;
}
 
void Queue::display() 
{
    for (int i=front+1; i<=rear; i++)
    {
        cout << Q[i] << " ";        
    }
    cout << endl;
}
 
int main() 
{
 
    Queue q(5);
    q.enqueue(10);
    q.enqueue(46);
    q.enqueue(110);
    q.enqueue(320);
    q.enqueue(60);

    q.display();


}