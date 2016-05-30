/*
 * File: Obenglobish.cpp
 * ----------------------
 * Name: [TODO: enter name here]
 * Section: [TODO: enter section leader here]
 * This file is the starter project for the Obenglobish problem.
 * [TODO: rewrite the documentation]
 */

#include <iostream>
#include <string>
#include "simpio.h"
#include "strlib.h"
using namespace std;

/* Main program */


string obenglobish(string);

int main() {
   // [TODO: fill in the code]
	while(true)
	{
		string word = getLine("Enter a word: ");
		if(word == "") break;
		string trans = obenglobish(word);
		cout << word << " -> " << trans << endl;
	}
	return 0;
}

string obenglobish(string w)
{
	int indexVowel = 0;
	string re;
	// ignore the last char
	for(string::size_type i = 0; i < w.length() - 1; i++)
	{
		if((w[i] == 'a')||(w[i] == 'e')||(w[i] == 'i')||(w[i] == 'o')||(w[i] == 'u'))
		{
			// consider second char is vowel but first is not. 
			if((i - indexVowel != 1) || indexVowel == 0)
			{
				re = re + "ob" + w[i];
				indexVowel = i;
			} else {
				re += w[i];
				indexVowel = i;
			}
		} else{
			re += w[i];
		}
	}
	re += w[w.length()-1];
	return re;
}
