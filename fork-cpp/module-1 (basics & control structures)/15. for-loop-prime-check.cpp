// Function to check if number is Prime
string isPrime(int n) {
    
    bool flag = true;
    
    if (n < 4) {
        cout << "Yes";
    }
    
    else {
        for (int i = 2; i <= sqrt(n); i++) {
            
            if (n%i == 0) {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        
        if (flag == true)
            cout << "Yes" << endl;
    }
}
