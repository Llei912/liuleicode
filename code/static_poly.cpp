#include "static_poly.h"

#include <iostream>
#include <vector>


template<class Vehicle>
void run_vehicle(const Vehicle & vehicle)
{
	   vehicle.run();            // ����vehicle�ľ������͵��ö�Ӧ��run()
}

//int main()
//{
//	Car car;
//	Airplane airplane;
//	run_vehicle(car);         // ����Car::run()
//	run_vehicle(airplane);    // ����Airplane::run()
//}