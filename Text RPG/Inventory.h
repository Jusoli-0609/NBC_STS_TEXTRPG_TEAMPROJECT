#pragma once

#include<algorithm>
#include <map>
#include <string>
#include <vector>

#include "Item.h"
#include "Player.h"

template <typename T>
class Inventory
{
private:
	T* _Inventory_Items;
	int _Max_Inventory_Size;
	int _Max_Capacity;
	int _Current_Quantity_Of_Items;


public:
	Inventory(int _Current_Inventory_Size);
	int Get_Total_Weight();

};