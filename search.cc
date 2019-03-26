/*
* Program: search.cc
* Author: Jacob Beauchamp
* Date: March, 26, 2019
* Purpose: Generates an array of random integers, and prints them to the console. Then, prompts
* the user for a value to search for. If the value appears in the list at least once, its position is printed to console. If it is not
* present, the user is informed so.
*/

//directives
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//prototypes
void search(const int array[], int target);
/*
* Description: Sequentially searches an array for the specified target value
* Parameters: Takes an array of integers, and a target value, which is an integer
* Preconditions: array must be an array of integers, target must be an integer
* Postconditions: The function outputs the location(s) in which the target value appears in the array
*/

//start
int main(){
    //declarations
    int randoms[20];
    int target;
    //generate values
    srand(time(NULL));
    //run loop to fill elements, and simultaneously print them to console
    for(size_t i = 0; i < 20; i++)
    {
        randoms[i] = rand();
        cout << "Integer " << i << " is: " << randoms[i] << endl;
        
    }
    //prompt user and call search function
    cout << "Select a target value: ";
    cin >> target;
    search(randoms, target);
    return 0;
}

void search(const int array[], int target){
    bool present = false; //set present to fals by default
    for(size_t i = 0; i < 20; i++)
    {
        if(array[i] == target)
        {
            cout << "Target value located at position " << i << '.' << endl;
            present = true; //if target appears at least once, set present to true
        }
    }
    if(present == false) //only print missing message if it's not present
    cout << "Target value not present in list." << endl;
    return;
}