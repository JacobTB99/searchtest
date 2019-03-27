/*
* Program: search.cc
* Author: Jacob Beauchamp
* Date: March, 26, 2019
* Purpose: Generates an array of random integers, and prints them to the console. Then, prompts
* the user for a value to search for. If the value appears in the list, its position is printed to console. If it is not
* present, the user is informed so.
*/

//directives
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//prototypes
int search(const int array[], int target);
/*
* Description: Sequentially searches an array for the specified target value
* Parameters: Takes an array of integers, and a target value, which is an integer
* Preconditions: array must be an array of integers, target must be an integer
* Postconditions: The function returns the integer value of the index location of the target value.
*/

//start
int main(){
    //declarations
    int randoms[20];
    int target;
    int location = -1; //assume value nonexistend by default
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
    location = search(randoms, target);
    if(location == -1)
    {
        cout << "Value not found." << endl;
        return 0;
    }
    cout << "Target value located in position " << location << '.' << endl;
    return 0;
}

int search(const int array[], int target){
    //loop for entirety of array
    for(size_t i = 0; i < 20; i++)
    {
        if(array[i] == target) //return location if value exists
        {
        return i;
        }
    }
    return -1; //if value never found, then return -1
}