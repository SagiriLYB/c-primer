#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>
#include <string>
#include <vector>

class Person
{
public://声明为public
	Person(std::string Client_name, std::string Client_address);//构造函数
	Person();//构造函数的重载
 
	std::string name;
	std::string address;//内部变量
 
	void Show_info()
	{
		std::cout<<name<<"'s"<<" address is "<<address<<std::endl;
	}//类内定义函数
 
	const std::string& getname()
	{
		return name;
	}
	const std::string& getaddress()
	{
		return address;
	}//返回姓名地址的函数，只可访问，不可修改
};
Person::Person(std::string Client_name, std::string Client_address):name(Client_name),address(Client_address){};//构造函数定义内部变量
//此处我们在一个文件内定义了该类，如若类较大，应置于.h文件中

#endif