//函数多态
//函数多态也就是我们常说的函数重载。基于相同的函数名不同的参数列表可以指向不同的函数定义。
#include <iostream>
#include <string>
#include <vector>

int my_add(int a,int b)
{
	return a+b;
}

int my_add(int a ,std::string b)
{
	return a+atoi(b.c_str());
}
//int main()
//{
//	int i = my_add(1,2);
//	int s = my_add(1,"2");
//	std::cout << "i = " << i << std::endl;
//	std::cout << "s = " << s << std::endl;
//}

//宏多态
//#define  ADD(a,b)  a+b

//int main()
//{
//	int i1(1), i2(2);
//	std::string s1("hello,"),s2("world");
//	int i = ADD(i1,i2);
//	std::string s = ADD(s1,s2);
//	std::cout << "i =" << i << std::endl;
//	std::cout << " s = " << s << std::endl;
//
//
//}

//动态多态
//公共抽象基类
class Vehicle
{
public:
	virtual void run() const = 0;
};

//派生于vehicle的具体car类
class  Car:public Vehicle
{
public:
		virtual void run() const
		{
			std::cout << "run a car" << std::endl;
		}
};

//派生于vehicle的具体类airplane
class Airplane:public Vehicle
{
public:
	virtual void run() const
	{
		std::cout << "run a airplane" << std::endl;
	}
};

void run_vehicle(const Vehicle *vehicle)
{
	vehicle->run();
}


void run_vehicles(const std::vector<Vehicle*> &vehicles)
{
	for (unsigned int i = 0;i < vehicles.size();i++)
	{
		vehicles[i]->run();	          //根据具体的vehicle类型调用对应的run()
	}

}
//静态多态
//如果说动态多态是通过虚函数，父类指针指向之类的虚函数来表达共同的借口话，那么静态多态就是则是则是通过彼此独立但支持共同操作的具体类来表达共同性换句话说必须存在必要的同名函数。
//
//int main()
//{
//	Car car;
//	Airplane airplane;
//	std::vector<Vehicle*> vehicle;
//	vehicle.push_back(&car);
//	vehicle.push_back(&airplane);
//	run_vehicles(vehicle);
//	
//}