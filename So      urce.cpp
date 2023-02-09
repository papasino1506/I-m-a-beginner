#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
	char* str;
	str = new char[50];
	std::cout << "Input the text :";
	std::cin.getline(str,50);
	//std::fgets(str);
	std::puts(str);
	std::cout << sizeof(str);
}