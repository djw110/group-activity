#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// remove_duplicates takes a vector of integers and a vector of integers by reference
// It returns a vector of integers with all unique numbers
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    vector<int> unique_arr;
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        else{
            removed_elements.push_back(arr[i]);
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};

    // empty vector
    vector<int> removed_elements;

    
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);

    // This printings the original vector 1, 2, 2, 3, 4, 4, 5
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // This prints the new vector without duplicates
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;

    // This prints all the duplicate values however many times they showed up
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
