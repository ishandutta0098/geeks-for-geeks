//Program to print even number first followed by odd number
class Solution{
    public:
    void evenOdd(int a, int b){
        // Code here
        if ((a % 2) == 0) 
            cout << a << "\n" << b << endl;
        
        else 
            cout << b << "\n" << a << endl;
    }
};
