/* 3) Write a basic program to swap the value of 2 numbers 'a' and 'b' repeatedly
(as per the number of times input by the user).
The value of 'a' and 'b' would also be input by the user. Make sure to display the input values,
and then state the after swapping for 'n' number of times, the final values are.... */


// Header File Inclusion
#include<iostream>

// Namespace
using namespace std;

// Simultaneous function declaration and definition
void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Our execution starts here
int main(){

    // Variable declaration
    int x, y, n, i;

    // Taking value of 'a' and 'b' as input from user
    cout<<"Enter the value of 'a' : ";
    cin>>x;
    cout<<"Enter the value of 'b' : ";
    cin>>y;

    // Displaying the input value of 'a' and 'b'
    cout<<"Input value of 'a' is : "<<x<<endl;
    cout<<"Input value of 'b' is : "<<y<<endl;

    // Taking number of times to swap as input
    cout<<"Enter the number of times for swapping : ";
    cin>>n;

    // Printing four lines of dot (unnecessary)
    cout<<"."<<endl;
    cout<<"."<<endl;
    cout<<"."<<endl;
    cout<<"."<<endl;

    // Swapping n times using swap() function
    i = n % 2; /* For better memory optimization */
    for(i = n; i>0; i--){
        swap(&x, &y);
    }

    // Displaying the final output
    cout<<"After swapping for "<<n<<" times..."<<endl;
    cout<<"Final value of 'a' is :"<<x<<endl;
    cout<<"Final value of 'b' is :"<<y<<endl;

    // Return with 0 exit status
    return 0;
}
