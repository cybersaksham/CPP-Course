/*
STL is used it is not a good idea to re-invent wheel.

STL has 3 components :
1. Containers --- Object which stores data
    --> Stores data
    --> Use template class
2. Alogorithms --- Procedure to process data
    --> Sorting, searching etc...
    --> Use template functions
3. Iterators --- Iterate over elements of container
    --> It is an object which points to an element in a container
    --> It is handled just like pointers.
    --> It connects algorithm with containers.
*/

/*
Containers :
1. Sequence Containers --- Linear Fashion
    --> Vector, List, Dequeue
2. Associative Containers --- Direct Access
    --> Set/Multiset, Map/Multimap
3. Derived Containers --- Real World Modelling
    --> Stack, Queue, Priority-queue
*/

/*
Sequence Containers :
1. Vector
    --> Random Access -- Fast
    --> Insertion or deletion in middle -- Slow
    --> Insertion at end -- Fast
2. List
    --> Random Access -- Slow
    --> Insertion or deletion in middle -- Slow
    --> Insertion at end -- Fast
*/

/*
Associative Containers :
    --> All operation are fast except Random Access
*/

/*
Derived Containers :
    --> Depends
*/