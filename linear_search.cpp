#include <iostream>
using namespace std;
int linear_search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    int a[20];
    
    cout << "Enter the size of the Array: " << endl;
    cin >> n;
    
    cout << "Enter " << n << " Integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x;
    cout << "Enter the target element to search: " << endl;
    cin >> x;
    int result = linear_search(a, n, x);
    
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << "." << endl;
    }
    
    return 0;
}



/*
Output
PS D:\Ruturaj> 


             > cd "d:\Ruturaj\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
Enter the size of the Array: 
5
Enter 5 Integers: 
11
12
13
14
15
Enter the target element to search: 
15
Element found at index 4.
*/