#include <iostream>
#include <thread>
#include <string>

using namespace std;

void countUp() {
    for (int i = 0; i <= 20; i++) {
        cout << "Thread 1 counting up: " << i << endl;
    }
}

void countDown() {
    for (int i = 20; i >= 0; i--) {
        cout << "Thread 2 counting down: " << i << endl;
    }
}

int main() {
    string programName = "Concurrency Counter Program";

    cout << programName << " started." << endl;

    thread threadOne(countUp);
    threadOne.join();

    thread threadTwo(countDown);
    threadTwo.join();

    cout << programName << " completed." << endl;

    return 0;
}
