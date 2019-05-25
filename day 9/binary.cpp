#include <iostream> 
using namespace std;  
bool isOne(int i) 
{ 
    if (i == 1) 
        return true; 
    else
        return false; 
} 

int main() 
{ 
  
    int a[10],n;
    cout<<"\nEnter array size:";
    cin>>n;
    cout<<"Enter the array elements(0's & 1's only):";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c1 = count_if(a, a + n, isOne); 
  
    cout << "No.of 1's: " << c1 << endl; 
    cout << "No.of 0's: " << (n - c1) << endl; 
  
    return 0; 
} 
