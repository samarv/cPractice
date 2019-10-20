#include <stdio.h>
#include <iostream>
#include <array>
#include <vector>
#include <tuple> // for get()
using namespace std;

/*
    Creates a queue by allocating the appropriate amount of memory for an
    instance of the Queue struct, and initializes all of the fields of the
    struct. Also allocates memory for the queue's storage structure. 
*/

class Queue
{
private:
    // Private attribute
    vector<int> g1;

public:
    void enqueue(int item)
    {
        g1.push_back(item);
    }
    void dequeue()
    {
        g1.erase(g1.end() - 1);

        // what's going on here.
    }
    void free()
    {
        return g1.clear();
    }
    int display(int index)
    {
        return g1.at(index);
    }
};

int main(void)
{
    cout << "boo \n";
    Queue inti;
    inti.enqueue(1);
    printf("%d \n", inti.display(0), inti.display(0));
    inti.dequeue();
}

/*
    Adds the given item to the end of the queue. If the queue does
    not have room, expand the queue's available storage so that it 
    does have room for the additional item.
*/

/*
    Removes the item at the front of the queue and returns it. 
    If the queue is empty, this function should return -1.
*/

/*
    Frees the memory used to hold the queue instance and its
    associated storage. 
*/
