#include <stdio.h> 

  
// Prints max at first position, min at second position 
// second max at third position, second min at fourth 
// position and so on. 
void rearrange(int arr[], int n) 
{ 
    // initialize index of first minimum and first 
    // maximum element 
    int max= n - 1, min = 0,i; 
  
    // store maximum element of array 
    int max_elem = arr[n - 1] + 1; 
  
    // traverse array elements 
    for (i = 0; i < n; i++) { 
        // at even index : we have to put maximum element 
        if (i % 2 == 0) { 
            arr[i] += (arr[max] % max_elem) * max_elem; 
            max--; 
        } 
  
        // at odd index : we have to put minimum element 
        else { 
            arr[i] += (arr[min] % max_elem) * max_elem; 
            min++; 
        } 
    } 
  
    // array elements back to it's original form 
    for (i = 0; i < n; i++) 
        arr[i] = arr[i] / max_elem; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 },i; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    printf("Original Array\n"); 
    for(i = 0; i < n; i++) 
        printf("%d",arr[i]);
  
    rearrange(arr, n); 
  
    printf("\nModified Array\n"); 
    for ( i = 0; i < n; i++) 
        printf("%d",arr[i]);
    return 0; 
} 
