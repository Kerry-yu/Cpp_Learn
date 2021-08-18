#include<iostream>
#include "swap.h"

using namespace std;

//º¯Êý¶¨Òå
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}