#include <iostream>
#include <set>
#include <string>

void displaySet(const std::set<std::string>& s) {
    std::cout << "Set contents: ";
    for (const auto& item : s) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare a set of strings
    std::set<std::string> mySet;

    // 1. Inserting elements into the set
    mySet.insert("apple");
    mySet.insert("banana");
    mySet.insert("cherry");
    mySet.insert("apple");  // Duplicate, won't be added
    mySet.insert("date");

    std::cout << "After inserting elements:" << std::endl;
    displaySet(mySet);

    // 2. Checking if an element exists in the set using find()
    std::string toFind = "banana";
    if (mySet.find(toFind) != mySet.end()) {
        std::cout << toFind << " is in the set." << std::endl;
    } else {
        std::cout << toFind << " is not in the set." << std::endl;
    }

    // 3. Erasing an element from the set
    mySet.erase("banana");
    std::cout << "After erasing 'banana':" << std::endl;
    displaySet(mySet);

    // 4. Attempting to erase an element that does not exist
    std::size_t numErased = mySet.erase("banana");  // Returns 0 if not found
    if (numErased == 0) {
        std::cout << "'banana' was not found in the set." << std::endl;
    }

    // 5. Size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    // 6. Using count() to check the existence of an element
    if (mySet.count("apple") > 0) {
        std::cout << "'apple' is in the set." << std::endl;
    } else {
        std::cout << "'apple' is not in the set." << std::endl;
    }

    // 7. Clearing all elements in the set
    mySet.clear();
    std::cout << "After clearing the set:" << std::endl;
    displaySet(mySet);

    // 8. Check if the set is empty
    if (mySet.empty()) {
        std::cout << "The set is now empty." << std::endl;
    }

    return 0;
}
