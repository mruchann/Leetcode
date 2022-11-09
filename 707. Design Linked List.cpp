// check out the comment lines, they're very important!

class Node 
{
public:
    int val;
    Node *prev, *next;
    
    Node(): val(0), prev(nullptr), next(nullptr) {}
    Node(int data): val(data), prev(nullptr), next(nullptr) {}
};

class MyLinkedList 
{
public:
    int size;
    Node *head;
    
    MyLinkedList() 
    {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) 
    {
        if (index < 0 || index >= size)
            return -1;
        else
        {
            Node *temp = head;
            for (int i = 0; i < index; i++)
                temp = temp->next;
            return temp->val;
        }
    }
    
    void addAtHead(int val) 
    {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) 
    {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) 
    {
        if (index >= 0 && index <= size) 
        {
            Node *newNode = new Node(val); 
            
            if (index == 0) 
            {
                if (head == nullptr)
                    head = newNode;
                else
                {
                    newNode->next = head;
                    head->prev = newNode;
                    head = newNode;
                }
            }
            else
            {
                Node *temp = head;
   
                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;
                
                newNode->next = temp->next;
                newNode->prev = temp;
                if (temp->next) // append
                    temp->next->prev = newNode;
                temp->next = newNode;
            }  
            size++;               
        }
    }
    
    void deleteAtIndex(int index) 
    {
        if (index >= 0 && index < size)
        {
            Node *temp = head;
            if (index == 0)
            {
                head = head->next;
                if (head != nullptr) // size = 1
                    head->prev = nullptr;
                delete temp;
                temp = nullptr;
            }
            else
            {
                for (int i = 0; i < index; i++)
                    temp = temp->next;
                temp->prev->next = temp->next;
                if (temp->next != nullptr) // delete last element
                    temp->next->prev = temp->prev;
                delete temp;
                temp = nullptr;
            }
            size--; 
        }
    }
};
