#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> data;     // underlying data structure
public:
    void push(T val) {  // push an element onto the stack
        data.push_back(val);
    }
    T pop() {           // pop an element from the stack
        if (data.empty()) {
            cerr << "Error: Stack is empty." << endl;
            exit(1);
        }
        T val = data.back();
        data.pop_back();
        return val;
    }
    [[nodiscard]] bool empty() const {    // check if the stack is empty
        return data.empty();
    }
};

int main() {
    Stack<int> intStack;// create an integer stack
    intStack.push(5);       // push an element onto the stack
    intStack.push(10);
    cout << intStack.pop() << endl;  // pop an element from the stack
    cout << intStack.pop() << endl;
    cout << intStack.empty() << endl;    // check if the stack is empty

    Stack<string> stringStack;  // create a string stack
    stringStack.push("Hello");
    stringStack.push("World");
    cout << stringStack.pop() << endl;
    cout << stringStack.pop() << endl;
    cout << stringStack.empty() << endl;
    return 0;
}
