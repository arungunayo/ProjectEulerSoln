#include <iostream>
//Soln at O(1) complexity
// Function to get the Nth term
int getNterm(int a, int n, int d){
	return (a + ((n-1)*d));}


// Function to get the summation of series till the Nth term
int sumN(int a, int n, int d){
	return n*(a + getNterm(a, n, d))/2;
}

int main()
{	
	int a1 = 3;
	int a2 = 5;
	int a3 = 15;
	int n1 = 999/a1;
	int n2 = 999/a2;
	int n3 = 999/a3;
	int sn1 = sumN(a1,n1,a1);
	int sn2 = sumN(a2,n2,a2);
	int sn3 = sumN(a3,n3,a3);
	// std::cout << sn1 << " " << n1 << "\t" << sn2 << " " << n2<< "\t" << sn3 <<" " << n3 << std::endl; //tesing
	std:: cout << "The result is: "<< (sn1+sn2-sn3)<< std::endl;
	return 0;
}
