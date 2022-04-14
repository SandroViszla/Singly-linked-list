#ifndef DLINK
#define DLINK
#define NULL 0
template<typename U>
class List
{
public:
    List();
    ~List();
    void pop_front();
    void push_back(U data);
    void clear();
    int GetSize() { return Size; }
    U& operator[](const int index);
    void push_front(U data);
    void insert(U data, int index);
    void removeAt(int index);

protected:
    template<typename T>
    class Node
    {
    public:
        Node * pNext;
        T data;

        Node(T data = T(), Node *pNext = NULL)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node<U> *head;
};


#endif