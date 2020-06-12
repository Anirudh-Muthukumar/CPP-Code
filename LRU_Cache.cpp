#include<bits/stdc++.h>
using namespace std;

struct Node
{
    public: 
    int key, value;
    struct Node* prev;
    struct Node* next;
    Node(int k, int v): key(k), value(v), prev(NULL), next(NULL) {} 
};

class LRUCache
{
    public:

    int size, capacity;
    map <int, Node*> cache;
    struct Node* head;
    struct Node* tail;

    LRUCache()
    {
        head = 
    } 

    LRUCache(int cap)
    {
        size = 0;
        capacity = cap;
        cache = map<int, Node*>();
        head->next = tail;
        tail->prev = head;
    }

    // void addNode(struct Node* node)
    // {
    //     // Adds node to start of the list
    //     node->prev = head;
    //     node->next = head->next;

    //     head->next->prev = node;
    //     head->next = node;
    // }

    ~LRUCache()
    {
        map<int, Node*>::iterator it;
        for(it = cache.begin(); it!=cache.end(); ++it)
            delete it->second;
        // delete cache;
    }
};


int main()
{
    LRUCache cache(2);

    return 0;
}