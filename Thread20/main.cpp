#include <iostream>
#include <thread>
#include <mutex>

// Variables to share between threads
int counter = 0;
std::mutex mtx;

// Function to count up to 20
void countUp() {
    for (int i = 1; i <= 20; ++i) {
        {
            std::lock_guard<std::mutex> lock(mtx);
            counter = i;
            std::cout << "Thread 1: " << counter << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
    }
}

// Function to count down to 0
void countDown() {
    for (int i = 20; i >= 0; --i) {
        {
            std::lock_guard<std::mutex> lock(mtx);
            counter = i;
            std::cout << "Thread 2: " << counter << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 
    }
}

int main() {
    std::thread t1(countUp);
    std::thread t2(countDown);

    t1.join();
    t2.join();

    return 0;
}
