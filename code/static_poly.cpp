#include "static_poly.h"

#include <iostream>
#include <vector>


template<class Vehicle>
void run_vehicle(const Vehicle & vehicle)
{
	   vehicle.run();            // 根据vehicle的具体类型调用对应的run()
}

//int main()
//{
//	Car car;
//	Airplane airplane;
//	run_vehicle(car);         // 调用Car::run()
//	run_vehicle(airplane);    // 调用Airplane::run()
//}