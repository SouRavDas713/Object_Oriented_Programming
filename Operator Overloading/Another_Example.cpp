#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading the prefix increment operator
    Counter operator++() {
        count++;
        return *this;
    }

    // Display the current count
    void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter counter;

    // Display the initial count
    std::cout << "Initial ";
    counter.displayCount();

    // Use the overloaded ++ operator
    ++counter;

    // Display the count after incrementing
    std::cout << "After incrementing ";
    counter.displayCount();

    return 0;
}
