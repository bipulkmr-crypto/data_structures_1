#include <bits/stdc++.h>
using namespace std;
//@author Bipul Kumar IIT2020086 Aniket Kshirsagar IIT2020084 Divyam Rajput IIT2020085 IIIT Allahabad
int arr[100];

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *arr;
};
Queue *create(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->arr = new int[queue->capacity];
    return queue;
}
bool isFull(Queue *queue)
{
    return (queue->size == queue->capacity);
}
bool isEmpty(Queue *queue)
{
    return (queue->size == 0);
}
void enqueue(Queue *queue, int item)
{
    if (isFull(queue))
    {
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = item;
    queue->size = queue->size + 1;
}
int dequeue(Queue *queue)
{
    if (isEmpty(queue))
    {
        return INT_MIN;
    }
    int item = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size -= 1;
    return item;
}
int front(Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->arr[queue->front];
}
int main()
{
    cout << "Enter the size of queue to be enterd" << endl;
    int n;
    cin >> n;
    Queue *queue = create(n);
    int i;
    for (i = 0; i < n; i++)
    {
        int inp;
        cin >> inp;
        enqueue(queue, inp);
    }
    cout << "Poping the values in array" << endl;
    for (i = 0; i < n; i++)
    {
        cout << dequeue(queue) << endl;
    }
    //using this data structure in breadth first search
    int v[100][100];
    bool visited[100];
    memset(visited, false, sizeof(visited));
    Queue *q = create(100);
    enqueue(queue, 0);
    visited[0] = true;
    memset(v, -1, sizeof(v));
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            cin>>v[i][j];
        }
    }
    while (!isEmpty(q))
    {
        int p = front(queue);
        dequeue(queue);
        for (int j = 0; j < 100; j++)
        {
            if (!visited[v[p][0]] && v[p][j] != 0)
            {
                visited[v[p][0]] = true;
                enqueue(queue, v[p][0]);
            }
        }
    }
}
//was earliar trying using implementing using an vector but was overwhelemed by the code
// template<typename T> class vectorClass
// {
//     T* arr;
//     int capacity;
//     int current;
//     public:
//     vectorClass()
//     {
//         arr=new T[1];
//         capacity=1;
//         current =0;

//     }
//     void emplace_back(T data)
//     {
//         if(current==capacity)
//         {
//             T* temp=new T[2*capacity];
//             for(int i=0;i<capacity;i++)
//             {
//                 temp[i]=arr[i];
//             }
//             delete[] arr;
//             capacity *=2;
//             arr=temp;
//         }
//         arr[current]=data;
//         current++;
//     }
//     void erase(int index)
//     {
//         current--;
//     }

// };

// struct Queue
// {
//     static int  front=-1;
//     static int end=-1;
//     void push(int x)
//     {
//         if(front==-1)
//         {
//             front=0;
//             end=0;
//         }
//     }
//     int front()
//     {
//         int val = arr[0];

//         return val;
//     }
//     void pop()
//     {
//         arr.erase(arr.begin());
//     }
// };