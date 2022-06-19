/* 5) Write the letter C, with the help of Loop Statements */

// Header File Inclusion
#include<iostream>

// Namespace
using namespace std;

// Function declaration and definition
void printC(int n){

    // Iterating the column LOOP
    for(int i = 0; i < n; i++){

        // Iterating the row LOOPS

        // For blank spaces in first and last row
        for(int j = 0; j < n; j++){
            if(i == 0 || i == (n-1)){
                cout<<" ";
            }
        }

        // For stars in the first and the last row
        for(int j = 0; j < n; j++){
            if(i == 0 || i == (n-1)){
                cout<<"*";
            }
        }

        // For the body of C
        for(int j = (n/2 + 1); j < n; j++){
            
            // For the descending space star pattern (/)
            if(j == (n-i)){
                cout<<"**";
            }

            // For the ascending space star pattern (\)
            else if(i == j && j != (n-1)){
                cout<<"**";
            }

            // For proper spacing
            else{cout<<"  ";}
        }

        // For a new row along the column
        cout<<endl;
    }
}


// Our execution starts here
int main(){

    // Variable declaration
    int n;

    // Takingn input the height of the letter
    cout<<"Enter the height of the letter C : ";
    cin>>n;

    // Printing the pattern
    printC(n);

    // Default return statement for main()
    return 0;
}