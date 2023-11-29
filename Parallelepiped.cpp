#include<bits/stdc++.h>
using namespace std;
double a, b,c,d;
int main(){
     cin>>a>>b>>c;
    d=sqrt(a*b*c);
    cout<<4*(a*b/d+b*c/d+c*a/d);

return 0;
    
}



/* #include <bits/stdc++.h>
using namespace std;

// function to find the sum of
// all the edges of parallelepiped
double findEdges(double s1, double s2, double s3)
{
	// to calculate the length of one edge
	double a = sqrt(s1 * s2 / s3);
	double b = sqrt(s3 * s1 / s2);
	double c = sqrt(s3 * s2 / s1);

	// sum of all the edges of one side
	double sum = a + b + c;

	// net sum will be equal to the
	// summation of edges of all the sides
	return 4 * sum;
}

// Driver code
int main()
{
	// initialize the area of three
	// faces which has a common vertex
	double s1, s2, s3;
	s1 = 65, s2 = 156, s3 = 60;

	cout << findEdges(s1, s2, s3);

	return 0;
}
 */