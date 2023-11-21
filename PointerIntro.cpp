//
//  main.cpp
//  StaticDynamic1
//
//  Created by Aurélien Ammeloot on 14/11/2023.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    // Create an integer - statically.
    // Compiler makes room for the integer
    // Baked into the machine code
    // Allocation happens in the stack
    int num1 = 42;
    cout << num1 << endl;
    cout << &num1 << endl;
    
    // Create an integer - dynamically
    // Creating an integer pointer in the stack
    // Then allocate memory space in heap for integer
    
    int *num2;
    num2 = new int;
    
    // To set num2 you need to use a dereferencing operator
    *num2 = 42;
    
    // Print out value (dereferenced) of num2
    // Print out address (pointer) of num2
    
    cout << *num2 << endl;
    cout << num2 << endl;
    
    // Clean up memory
    delete num2;
    
    //int *p = nullptr;
    //cout << *p << endl;
    
    
    cout << "This computing environment uses:" << endl;
    cout << sizeof(char) << " byte for chars" << endl;
    cout << sizeof(short int) << " bytes for shorts" << endl;
    cout << sizeof(int) << " bytes for ints" << endl;
    cout << sizeof(long int) << " bytes for longs" << endl;
    cout << sizeof(float) << " bytes for floats" << endl;
    cout << sizeof(double) << " bytes for doubles" << endl;
    cout << sizeof(bool) << " byte for bools" << endl;
    cout << sizeof(int *) << " bytes for pointers" << endl;
    
    int *z;
    z = new int[5];
    z[0] = 5;
    z[1] = 6;
    z[2] = 7;
    z[3] = 6;
    z[4] = 7;
    delete z;
    
    
    return 0;
}
