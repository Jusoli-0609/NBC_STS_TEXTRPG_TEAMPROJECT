#include <iostream>
#include <string>

#include "Item.h"

void Item::PrintInfo() const
{
	std::cout << "아이템 이름: " 
	<< Item_Name << ", 가격: " 
	<< Item_Price << ", 갯수:" 
	<< Item_Count << ", 갯수당 무게: " 
	<< Item_Weight << std::endl;
}