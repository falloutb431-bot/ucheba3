#include <iostream> 
int main()
{
	{
		{
			bool a = true;
			bool b = true;
			bool c = a || b;
			if (c)
			{
				std::cout << "Operator: ||" << std::endl;
				std::cout << "a=True " << "b=true " << "c=true " << std::endl;
			}
		}
		{
			bool a = false;
			bool b = true;
			bool c = a || b;
			if (c)
			{
				std::cout << "a=false " << "b=true " << "c=true " << std::endl;
			}
		}
		{
			bool a = true;
			bool b = false;
			bool c = a || b;
			if (c)
			{
				std::cout << "a=true " << "b=false " << "c=true " << std::endl;
			}
		}
		bool a = false;
		bool b = false;
		bool c = a || b;
		if (c)
		{
			std::cout << "a=false" << "b=false" << "c=true" << std::endl;
		}
		else
		{
			std::cout << "a=false " << "b=false " << "c=false " << std::endl;
		}
	}
	bool a = true;
	bool b = true;
	bool c = a && b;
	if (c)
	{
		std::cout << "Operator: && " << std::endl;
		std::cout << "a=true " << "b=true " << "c= true " << std::endl;
	}
	{
		bool a = false;
		bool b = true;
		bool c = a && b;
		if (!c)
		{
			std::cout << "a=false " << "b=true " << "c=false " << std::endl;
		}
	}
	{
		bool a = true;
		bool b = false;
		bool c = a && b;
		if (!c)
		{
			std::cout << "a=true " << "b=false " << "c=false " << std::endl;
		}
	}
	{
		bool a = false;
		bool b = false;
		bool c = a && b;
		if (!c)
		{
			std::cout << "a=false " << "b=false " << "c=false " << std::endl;
		}
	}

}
