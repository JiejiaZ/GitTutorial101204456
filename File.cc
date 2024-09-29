#include "File.h"
#include <iostream>

// Constructor
File::File(const std::string& name, const std::string& content, const Date& date)
    : name(name), content(content), lastModified(date) {}

// Method to compare file dates
bool File::lessThan(const File& other) const {
    return lastModified.lessThan(other.lastModified);
}

// Method to print file metadata (name and date)
void File::print() const {
    std::cout << "File: " << name << " (Last Modified: ";
    lastModified.print();
    std::cout << ")" << std::endl;
}

// Method to print metadata and content
void File::printContents() const {
    print();
    std::cout << "Content: " << content << std::endl;
}
