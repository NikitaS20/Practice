#pragma once
class Integer
{
public:
	/*Integer();
	~Integer();*/

	int getValue();
	void setValue(int val);
	void add(Integer obj);

	//void add(Integer &&obj);

private:
	int m_intVal{0};
};

