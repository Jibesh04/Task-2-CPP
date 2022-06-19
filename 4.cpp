/* 4) Create a calculator that can do addition, subtraction, multiplication, division,
find factorial, power of a number 'n' raised to 'x' and percentage of 'a' with respect to 'b'*/

// Header file inclusion
#include<iostream>

// Namespace
using namespace std;

// Functions
float sum(float a, float b){
    return (a + b);
}

float subtract(float a, float b){
    return (a - b);
}

float multiply(float a, float b){
    return (a * b);
}

float divide(float a, float b){
    if (b == 0){
        cout<<"Infinity"<<endl;
        exit(0);
    }
    return (a / b);
}

long int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}

float power(float a, int b){
    for(int i = 0; i < b; i++){
        a *= a;
    }
    return a;
}

float percentage(float a, float b){
    if(/*a == 0 && */ b == 0){
        cout<<"Percentage can't be determined"<<endl;
        exit(0);
    }
    return ((a/ /* (a + */ b /* ) */) * 100);
}

// Our execution starts here
int main(){

    // Variable declarations
    unsigned int n;
    float a, b, result;
    char exp;

    // Taking input operator
    cout<<"Operator symbolism : "<<endl;
    cout<<"+ for addition"<<endl;
    cout<<"- for subtraction"<<endl;
    cout<<"* for multiplication"<<endl;
    cout<<"/ for division"<<endl;
    cout<<"! for factorial"<<endl;
    cout<<"^ for power"<<endl;
    cout<<"% for percentage"<<endl;
    cout<<"Enter the desired operator : ";
    cin>>exp;

    // For factorial
    if(exp == '!'){
        cout<<"Enter the value of 'n' : ";
        cin>>n;
        cout<<n<<exp<<" = "<<factorial(n)<<endl;
        exit(0);
    }

    // Taking 'a' and 'b' as input from user for other operations
    else{
        cout<<"Enter the value of 'a' : ";
        cin>>a;
        cout<<"Enter the value of 'b' : ";
        cin>>b;
    }

    // Result Calculation
    if(exp == '+'){
        result = sum(a, b);
    }
    else if(exp == '-'){
        result = subtract(a, b);
    }
    else if(exp == '*'){
        result = multiply(a, b);
    }
    else if(exp == '/'){
        result = divide(a, b);
    }
    else if(exp == '^'){
        result = power(a, b);
    }
    else if(exp == '%'){
        result = percentage(a, b);
    }

    // Displaying Final Result
    cout<<a<<" "<<exp<<" "<<b<<" = "<<result<<endl;

    // Default Return Statement for main()
    return 0;
}