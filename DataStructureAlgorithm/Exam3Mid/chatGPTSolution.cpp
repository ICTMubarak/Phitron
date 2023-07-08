#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> addresses;
    string address;
    
    // Input the doubly linked list of addresses
    while (cin >> address) {
        if (address == "end")
            break;
        addresses.push_back(address);
    }
    
    int Q;
    cin >> Q;
    
    string command, targetAddress;
    auto current = addresses.begin(); // Pointer to the current address
    
    while (Q--) {
        cin >> command;
        
        if (command == "visit") {
            cin >> targetAddress;
            auto it = find(addresses.begin(), addresses.end(), targetAddress);
            if (it != addresses.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            ++current;
            if (current == addresses.end()) {
                cout << "Not Available" << endl;
                --current;
            } else {
                cout << *current << endl;
            }
        } else if (command == "prev") {
            if (current == addresses.begin()) {
                cout << "Not Available" << endl;
            } else {
                --current;
                cout << *current << endl;
            }
        }
    }

    return 0;
}