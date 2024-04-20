#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <thread>
//#include <mutex>

//mutex data_mutex;
int shared_data = 0;

void worker_thread() {
    //data_mutex.lock();
    shared_data++; 
  //  data_mutex.unlock();
}

int main() {
//    thread t1(worker_thread);
//    thread t2(worker_thread);

//    t1.join();
//    t2.join();

//    std::cout << "Shared data: " << shared_data << std::endl;
    cout << "run successfully\n";
    return 0;
}
