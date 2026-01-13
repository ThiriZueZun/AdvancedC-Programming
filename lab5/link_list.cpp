#include<list>
#include<iostream>
using namespace std;

int main(){
    list<int> mylist;

    // Adding elements to the list
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);

    //Displaying the elements of the list
    cout << "Elements in the list: ";
    for(int value : mylist){
        cout << value << " ";
    }

    //Removing an element from the list
    mylist.remove(20);

    //Displaying the elements after removal
    cout << "\nElements in the list after removal: ";
    for(int value : mylist){
        cout << value << " ";
    }

    cout << endl;

    return 0;

}