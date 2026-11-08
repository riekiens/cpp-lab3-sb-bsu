#include <iostream>
 #include <cmath> 
using namespace std;
 int main() { 
    double number; 
    int k, i = 1, sum_k = 0; 
    cout << «Enter the amount of integers to sum: "; cin >> k;
     do { 
     cout << "Enter integer nr. " << i << ": ";
cin >> number; 
 if (floor(number) != number) { 
 cout << "Error: only integers are allowed!" << endl;
return 1;
 } 
sum_k += static_cast<int>(number); 
i++; 
} while (i <= k);
  cout << "The total sum of " << k << " integers is: " << sum_k; 
  return 0; 
  }