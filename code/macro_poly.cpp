//������̬
//������̬Ҳ�������ǳ�˵�ĺ������ء�������ͬ�ĺ�������ͬ�Ĳ����б����ָ��ͬ�ĺ������塣
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

//���̬
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

//��̬��̬
//�����������
class Vehicle
{
public:
	virtual void run() const = 0;
};

//������vehicle�ľ���car��
class  Car:public Vehicle
{
public:
		virtual void run() const
		{
			std::cout << "run a car" << std::endl;
		}
};

//������vehicle�ľ�����airplane
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
		vehicles[i]->run();	          //���ݾ����vehicle���͵��ö�Ӧ��run()
	}

}
//��̬��̬
//���˵��̬��̬��ͨ���麯��������ָ��ָ��֮����麯������ﹲͬ�Ľ�ڻ�����ô��̬��̬������������ͨ���˴˶�����֧�ֹ�ͬ�����ľ���������ﹲͬ�Ի��仰˵������ڱ�Ҫ��ͬ��������
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