#include<iostream>
#include<fstream>
#include<string>

int main(){
    int pos, pos2;
    std::ifstream file("subject.txt");

    if (!file.is_open()) {
        std::cerr << "Error: Could not open subject.txt" << std::endl;
        return 1;
    }

    // std::string line;
    // while (std::getline(file, line)) {
    //     std::cout << line << std::endl;

    //     pos = line.find("love");
    //     if (pos >= line.length()) {
    //         std::cout << "'love' not found in this line." << std::endl;
    //     } else {
    //         std::cout << "'love' found at position: " << pos << std::endl;
    //     }
    // }

     std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        // transform line to lowercase for case-insensitive search
        std::string lowerLine = line;
        for (char& c : lowerLine) {
            c = std::tolower(c);
        }

        pos = lowerLine.find("love");
        pos2 = lowerLine.find("love", pos + 1); // this will always return npos since "Love" != "love"
        if (pos >= line.length()) {
            std::cout << "'love' not found in the line." << std::endl;
        } else {
            std::cout << "'love' found at position: " << pos << std::endl;
        }

        //tokenize the line into words
        size_t start = 0;
        size_t end = lowerLine.find(' ');
        bool foundword = false;
        while (end != std::string::npos) {
            std::string word = lowerLine.substr(start, end - start);
            start = end + 1;
            end = lowerLine.find(' ', start);
            std::cout << "Token: " << word << std::endl;
        }
    }

    file.close();
    return 0;
}
