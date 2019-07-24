// Move_semantics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Integer.h"
#include <utility>



int main()
{
	Integer obj1, obj2;
	obj1.setValue(2);
	obj2.add(obj1);
	std::cout <<"Addition: "<< obj2.getValue()<<std::endl;

	obj2.add(std::move(obj1));
	std::cout << "Value of obj2 after move add:" << obj2.getValue() << std::endl;
    return 0;
}

