// Program to print a number n's table in reverse order using While Loop
class Solution{
    public:
    void printTable(int n)
    {
        int multiplier=10;
        while(multiplier)
        {
           //Your code here
           cout << n * multiplier << " ";
           multiplier--;
        }
        
        cout<<endl;
    }  
};
