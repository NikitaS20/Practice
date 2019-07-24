#include "stdafx.h"
#include "Integer.h"


//Integer::Integer()
//{
//	
//}
//
//
//Integer::~Integer()
//{
//}

int Integer::getValue()
{
	return m_intVal;
}

void Integer::setValue(int val)
{
	m_intVal = val;
}

void Integer::add(Integer obj)
{
	std::cout << "Obj val: " << obj.getValue() << std::endl;
	m_intVal += obj.getValue();
}

//void Integer::add(Integer && obj)
//{
//	std::cout << "This is called"<<std::endl;
//	m_intVal += obj.getValue();
//}
