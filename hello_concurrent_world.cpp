/**
 * C++ Concurrency in Action
 * hello_concurrent_world.cpp
 * Wilson Woods
 * 5.8.2021
 */

#include <iostream>
#include <thread>


// every thread needs an initial function
// so define a function hello() to be used
// to initialize the thread
// other thread started with main()
void hello()
{
    std::cout << "Hello Concurrent World!\n";
}

int main()
{
    // create thread object t
    // thread ctor takes initial function hello() as input
    std::thread t(hello);

    // thread in main needs to wait for thread t
    // call join to make sure this happens.
    t.join();

    return 0;
}

