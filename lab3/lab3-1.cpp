#include<iostream>
#include<fstream>
#include<string>

int main(){
    int pos;
    std::ifstream file("subject.txt");

    if (!file.is_open()) {
        std::cerr << "Error: Could not open subject.txt" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
        pos = line.find("love");
        if (pos >= line.length()) {
            std::cout << "'love' not found in this line." << std::endl;
        } else {
            std::cout << "'love' found at position: " << pos << std::endl;
        }
    }

    file.close();
    return 0;

}
