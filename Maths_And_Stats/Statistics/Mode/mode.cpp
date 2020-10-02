//Finding mode of a given set of array.

#include <iostream> 
using namespace std; 
  
void dispMode(int s[], int n)  //s array is the set of numbers from which mode is to be taken and n is the total number of items.
{ 
    
    int o[n]; //output array
  
    int max = *max_element(s, s + n); 
   
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0; 
  
    for (int i = 0; i < n; i++) 
        count[s[i]]++;           //counts the number of times an item appears and stores it
  
    int mode = 0; 
    int q = count[0]; 
    for (int i = 1; i < t; i++) { 
        if (count[i] > q) { 
            q = count[i]; 
            mode = i; 
        } 
    } 
  
    cout << "Mode of the given series will be = " << mode; 
} 
  
int main() 
{ 
    int s[] = {20, 30, 10, 90, 20, 50, 70, 80, 90, 20, 10}; 
    int n = sizeof(s) / sizeof(s[0]); 
    dispMode(s, n); 
    return 0; 
} 