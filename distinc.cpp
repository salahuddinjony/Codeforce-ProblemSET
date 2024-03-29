// C++ implementation to find unique digit
// numbers in a range
#include<bits/stdc++.h>
using namespace std;

// Function to print unique digit numbers
// in range from l to r.
void printUnique(int l, int r)
{
 // Start traversing the numbers
 for (int i=l+1 ; i<=r ; i++)
 {
  int num = i;
  bool visited[10] = {false};

  // Find digits and maintain its hash
  while (num) ///1001
  {
   // if a digit occurs more than 1 time
   // then break
   if (visited[num % 10]) //11 1 --F
  
    break;

   visited[num%10] = true;//11 1--T 

   num = num/10; //1
  }

  // num will be 0 only when above loop
  // doesn't get break that means the
  // number is unique so print it.
  if (num == 0)
   cout << i << " ";
 }
}

// Driver code
int main()
{
 int l , r;
 cin>>l>>r;
 printUnique(l, r);
 return 0;
}

