class Node 
{
public:
    int val;
    Node *next;
    Node(): val(0), next(nullptr) {}
    Node(int data): val(data), next(nullptr) {}
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
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) 
    {
        if (head == nullptr) 
            addAtHead(val);
        else
        {
            Node *newNode = new Node(val);            
            Node *temp = head;
        
            while (temp->next != nullptr)
                temp = temp->next;
            
            temp->next = newNode;
            size++;
        }
    }
    
    void addAtIndex(int index, int val) 
    {
        if (index >= 0 && index <= size)
        {
            if (index == 0) 
                addAtHead(val);
            else
            {
                Node *temp = head;
                Node *newNode = new Node(val);    
                
                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;
                
                newNode->next = temp->next;
                temp->next = newNode;
                size++;                   
            }    
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
                delete temp;
                temp = nullptr;
            }
            else
            {
                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;
                Node *deletedNode = temp->next;
                temp->next = deletedNode->next;
                delete deletedNode;
                deletedNode = nullptr;
            }
            size--; 
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
