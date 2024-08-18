#include <iostream>
#include <vector>
using namespace std;

// Function to print the elements of the vector
void printVector(vector<int> &vec){
    // for (int elem : vec){
    //     cout << elem << " ";
    // }
    for (vector<int>::iterator elem = vec.begin(); elem != vec.end(); elem++){
        cout << *elem << " ";
    }
}

// Function to add elements to the vector starting from its current size
void addElements(vector<int> &vec, int size){
    // Resize the vector to accommodate the new elements
    vec.resize(vec.size() + size);

    // int* ptr = vec.data();
    // for (int i = 0; i < size; i++){
    //     ptr[size + i] = size + i;
    // }

    // Get a pointer to the first element to be added
    // Then points to the fifth elements
    int* ptr = vec.data() + size;
    for (int i = 0; i < size; i++){
        *(ptr + i) = size + i;
    }
    cout << endl;
}
int main(){
    vector<int> myVector;

    // Initially add some elements
    for (int i = 0; i < 5; i++){
        myVector.push_back(i);
    }

    cout << "Original vector: ";
    printVector(myVector);

    // Add more elements using the addElements function
    addElements(myVector, 5);

    cout << "After adding elements: ";
    printVector(myVector);

    return 0;
}