#include <iostream> 
#include <string>   
using namespace std;

int main() {
    char a[6] = {'a', 'b', 'c', 'd', 'e', 'f'}; 
    char b[6] = {'A', 'B', 'C', 'D', 'E', 'F'}; 
    char temp;
    
    string mess = "AbbeF"; 
    for (int i = 0; i < mess.length(); i++) {
        temp =  mess[i] ;
        if ((int)temp > 90) { 
            cout << a [(int)temp - (int)'a'];
        } else {    
            cout << b [(int)temp - (int)'A'];
        }
    }

    // cout << (int)'a' << endl;
    // cout << (int)'A' << endl;
    
    return 0; 
}