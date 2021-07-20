// Function to check divisibility
// N is the input integer
void isDivisibleByPrime(int n){
    
    string div = "-1";
    
    // Your code here
    if (n % 2 == 0) 
        div = "Two";
        
    if (n % 3 == 0) 
        div = "Three";
    
    if (n % 11 == 0)
        div = "Eleven";
        
    cout << div << endl;
    
}
