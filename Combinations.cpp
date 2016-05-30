/*
 * File: Combinations.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the recursive combinations problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include "simpio.h"
using namespace std;


int comb(int n, int k);
// c(n,k) = c(n-1,k) + c(n-1,k-1); 
// end condition, c(n,0) = 1, c(n=k) = 1;

int main() {
	// [TODO: fill in the code]
	int n, k;
	cout << "Please enter n, k: ";
	cin >> n >> k;
	cout << "Combination is " << comb(n,k) << endl;
	return 0;
}

int comb(int n, int k)
{
	if((n==k) || k ==0)
		return 1;
	else
		return comb(n-1,k)+comb(n-1,k-1);
}
