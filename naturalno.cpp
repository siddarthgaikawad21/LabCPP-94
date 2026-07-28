#include <iostream>
int main() 
{
int n;
int i = 1;
cout << "Enter a number (n): ";
cin >> n;
cout << "Natural numbers up to " << n << ":" << endl;
while (i <= n) 
{
cout << i << " ";
i++;
}
cout << endl;return 0;
}
