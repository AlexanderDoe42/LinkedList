template <class T>
struct Node
{
    Node() : next_node(nullptr), previous_node(nullptr) {}
    T value;
    Node * next_node;
    Node * previous_node;
};

template <class T>
struct _iterator
{
    Node<T>* _node;

    _iterator() : _node(nullptr) {}
    _iterator(Node<T>* arg) : _node(arg) {}
    T& operator* ();
    bool operator!= (const _iterator&);
    _iterator operator++ (int);
    _iterator operator-- (int);
    _iterator& operator++ ();

};

template <class T>
class List
{
    int _size;
    Node<T> * first_node;
    Node<T> * last_node;
    Node<T> * end_node;  //concatenates the last and first elements

public:
    typedef _iterator<T> iterator;

    List();
    void add(T);
    void remove(iterator&);
    int size();
    _iterator<T> begin();
    _iterator<T> end();    //past the last element
    _iterator<T> last();   //the actual last element

    ~List();
};

#include "list_impl.h"
