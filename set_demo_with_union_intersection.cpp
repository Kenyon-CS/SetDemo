#include <iostream>
#include <set>
#include <string>
#include <algorithm>  // For std::set_union and std::set_intersection
#include <iterator>   // For std::inserter

// Function to display a set of strings
void displaySet(const std::set<std::string>& s) {
    std::cout << "Set contents: ";
    for (const auto& item : s) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare two sets of strings
    std::set<std::string> set1 = {"apple", "banana", "cherry", "date"};
    std::set<std::string> set2 = {"cherry", "date", "elderberry", "fig"};

    std::cout << "Set 1: " << std::endl;
    displaySet(set1);

    std::cout << "Set 2: " << std::endl;
    displaySet(set2);

    // Performing union operation (combining elements from both sets)
    std::set<std::string> unionSet;
    std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                   std::inserter(unionSet, unionSet.begin()));

    std::cout << "Union of Set 1 and Set 2: " << std::endl;
    displaySet(unionSet);

    // Performing intersection operation (common elements between sets)
    std::set<std::string> intersectionSet;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(),
                          std::inserter(intersectionSet, intersectionSet.begin()));

    std::cout << "Intersection of Set 1 and Set 2: " << std::endl;
    displaySet(intersectionSet);

    return 0;
}
