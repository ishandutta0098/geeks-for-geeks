// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d){
    
    float p = b/c;
    
    double q = b/a;
    
    int r = c/a;
    
    long long result = r + l;
    
    cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) << " " << sizeof(result) << endl;
    
    cout << sizeof(d) << " " << sizeof(d[3]) << endl;

}
