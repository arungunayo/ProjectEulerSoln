#include <iostream>

// Function to get the Nth term
int getNterm(int a, int n, int d){
	return (a + ((n-1)*d));}


// Function to get the summation of series till the Nth term
int sumN(int a, int n, int d){
	return (n/2)*(a + getNterm(a, n, d));
}

int main()
{	
	int a1 = 3;
	int a2 = 5;
	int n1 = 1000/a1;
	int n2 = 1000/a2;
	int sn1 = sumN(a1,n1,a1);
	int sn2 = sumN(a2,n2,a2);
	std:: cout << "The result is: "<< (sn1+sn2)<< std::endl;
	return 0;
}
