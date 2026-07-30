#include<algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "Inventory.h"

using namespace std;

template<typename T>
Inventory<T>::Inventory(int Current_Inventory_Size)
{
	_Max_Inventory_Size = Current_Inventory_Size;
	_Current_Quantity_Of_Items = 0;
	_Inventory_Items = new T[_Max_Inventory_Size];
}		

template<typename T>
int Inventory<T>::Get_Total_Weight()
{
    int Total_Weight = 0;
    for (int i = 0; i < _Current_Quantity_Of_Items; i++)
    {
        Total_Weight += _Inventory_Items[i].Item_Weight *_Inventory_Items[i].Item_Count;
    }
    return Total_Weight;
}
