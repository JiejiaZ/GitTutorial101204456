#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
private:
    std::string name;
    std::string content;
    Date lastModified;

public:
    // Constructor
    File(const std::string& name, const std::string& content, const Date& date);

    // Method to compare file dates
    bool lessThan(const File& other) const;

    // Method to print file metadata (name and date)
    void print() const;

    // Method to print metadata and content
    void printContents() const;
};

#endif
