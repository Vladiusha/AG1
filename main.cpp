#include <iostream>
#include <gmpxx.h>

using namespace std;

class Node{
public:
    unsigned int id;
    unsigned int revenue;
    Node(unsigned int id, unsigned int revenue) : id(id), revenue(revenue) {}
    Node(){}

private:
public:
    unsigned int getId() const {
        return id;
    }

    void setId(unsigned int id) {
        Node::id = id;
    }

    unsigned int getRevenue() const {
        return revenue;
    }

    void setRevenue(unsigned int revenue) {
        Node::revenue = revenue;
    }

};



class MinHeap {

    Node ** harr; // pointer to array of elements in heap
    int capacity; // maximum possible size of min heap
    int heap_size; // Current number of elements in min heap
public:
    MinHeap();
    // Constructor
    MinHeap(int capacity);

    // to heapify a subtree with the root at given index
    void MinHeapify(int);

    int parent(int i) { return (i - 1) / 2; }

    // to get index of left child of node at index i
    int left(int i) { return (2 * i + 1); }

    // to get index of right child of node at index i
    int right(int i) { return (2 * i + 2); }

    // to extract the root which is the minimum element
    int extractMin();

    // Decreases key value of key at index i to new_val
    void decreaseKey(int i, int new_val);

    // Returns the minimum key (key at root) from min heap
    int getMin() { return harr[0]; }

    // Deletes a key stored at index i
    void deleteKey(int i);

    // Inserts a new key 'k'
    void insertKey(unsigned id, unsigned revenue );
};

// Constructor: Builds a heap from a given array a[] of given size
MinHeap::MinHeap() {
    heap_size = 0;
    capacity = 10;
    harr = new Node * [10];
}

// Inserts a new key 'k'
void MinHeap::insertKey(unsigned id, unsigned revenue ) {
    if (heap_size == capacity) {
        std::cout << "\nOverflow: Could not insertKey\n";
        capacity = capacity * 2;
        Node ** newArray = new Node * [capacity];
        for( int i = 0; i < (capacity/2); i++ ){
            newArray[i]->setId(harr[i]->getId());
            newArray[i]->setRevenue(harr[i]->getRevenue());
            delete harr[i];
        }
        delete [] harr;
        harr = newArray;
    }

    // First insert the new key at the end
    heap_size++;
    int i = heap_size - 1;
    harr[i]->setId(id);
    harr[i]->setRevenue(revenue);

    // Fix the min heap property if it is violated
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(harr[i], harr[parent(i)]);
        i = parent(i);
    }
}

// Decreases value of key at index 'i' to new_val.  It is assumed that
// new_val is smaller than harr[i].
void MinHeap::decreaseKey(int i, int new_val) {
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i]) {
        swap(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

// Method to remove minimum element (or root) from min heap
int MinHeap::extractMin() {
    if (heap_size <= 0)
        return INT_MAX;
    if (heap_size == 1) {
        heap_size--;
        return harr[0];
    }

    // Store the minimum value, and remove it from heap
    int root = harr[0];
    harr[0] = harr[heap_size - 1];
    heap_size--;
    MinHeapify(0);

    return root;
}


// This function deletes key at index i. It first reduced value to minus
// infinite, then calls extractMin()
void MinHeap::deleteKey(int i) {
    decreaseKey(i, INT_MIN);
    extractMin();
}

// A recursive method to heapify a subtree with the root at given index
// This method assumes that the subtrees are already heapified
void MinHeap::MinHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i) {
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}

// A utility function to swap two elements
void swap(Node * x, Node *y) {
    Node * temp = x;
    x = y;
    y = temp;
}

class CHolding
        {
                public:
                // default constructor
                // destructor
                void Add    (int chain, unsigned int id, unsigned int revenue);
                bool Remove (int chain, unsigned int & id);
                bool Remove (unsigned int & id);
                void Merge  (int dstChain, int srcChain);
                bool Merge  (void);
                private:
                // todo
        };


int main() {
    std::cout << "Hello, World!" << std::endl;

    bool res;
    unsigned int id;

//Ukazkovy vstup #1
//-----------------
    CHolding f1;
    f1 . Add ( 7, 2, 9 );
    f1 . Add ( 12, 4, 4 );
    f1 . Add ( 6, 15, 2 );
    f1 . Add ( 6, 9, 3 );
    res = f1 . Remove ( 12, id );
    // res = true, id = 4
    res = f1 . Remove ( 12, id );
    // res = false, id = N/A
    res = f1 . Remove ( 6, id );
    // res = true, id = 15
    res = f1 . Remove ( 6, id );
    // res = true, id = 9
    res = f1 . Remove ( 6, id );
    // res = false, id = N/A


//Ukazkovy vstup #2
//-----------------
    CHolding f2;
    f2 . Add ( 4, 2, 2 );
    f2 . Add ( 1, 4, 3 );
    f2 . Add ( 8, 9, 8 );
    res = f2 . Remove ( id );
    // res = true, id = 2
    res = f2 . Remove ( id );
    // res = true, id = 4


//Ukazkovy vstup #3
//-----------------
    CHolding f3;
    f3 . Add ( 10, 101, 9 );
    f3 . Add ( 10, 102, 8 );
    f3 . Add ( 10, 103, 7 );
    f3 . Add ( 10, 104, 6 );
    f3 . Add ( 10, 105, 5 );
    f3 . Add ( 20, 201, 9 );
    f3 . Add ( 20, 202, 8 );
    f3 . Add ( 20, 203, 7 );
    f3 . Add ( 20, 204, 6 );
    f3 . Add ( 20, 205, 5 );
    f3 . Add ( 30, 301, 9 );
    f3 . Add ( 30, 302, 8 );
    f3 . Add ( 30, 303, 7 );
    f3 . Add ( 30, 304, 6 );
    f3 . Add ( 30, 305, 5 );
    res = f3 . Remove ( id );
    // res = true, id = 105
    res = f3 . Remove ( id );
    // res = true, id = 205
    res = f3 . Remove ( id );
    // res = true, id = 305
    res = f3 . Remove ( id );
    // res = true, id = 104
    res = f3 . Remove ( id );
    // res = true, id = 204
    res = f3 . Remove ( id );
    // res = true, id = 304
    res = f3 . Remove ( id );
    // res = true, id = 103
    res = f3 . Remove ( id );
    // res = true, id = 203
    res = f3 . Remove ( id );
    // res = true, id = 303
    res = f3 . Remove ( id );
    // res = true, id = 102
    res = f3 . Remove ( id );
    // res = true, id = 202
    res = f3 . Remove ( id );
    // res = true, id = 302

    return 0;
}