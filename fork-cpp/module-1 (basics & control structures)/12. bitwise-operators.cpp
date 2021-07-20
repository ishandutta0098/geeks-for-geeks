// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {

    // Your code here
    int d = a ^ a;
    int e = c ^ b;
    int f = a & b;
    int g = c | (a ^ a);
    
    cout << d << "\n" << e << "\n" << f << "\n" << g << endl;
    
    e = ~e;
    
    cout << e << endl;
    
}
