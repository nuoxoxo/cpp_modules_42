/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nxu              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Point.hpp"

int main()
{
    Point const p1(0, 0);
    Point const p2(30, 0);
    Point const	p3(15, 15);
	
	bool		flag;
    
    
	std::cout << "p1 " << "(" << p1.getX().toFloat() << "," << p1.getY().toFloat() << ")\n";
    std::cout << "p2 " << "(" << p2.getX().toFloat() << "," << p2.getY().toFloat() << ")\n";
    std::cout << "p3 " << "(" << p3.getX().toFloat() << "," << p3.getY().toFloat() << ")\n";
    
	// Test 1
	{
		Point const o1(12, 2);
		std::cout << "o1 " << "(" << o1.getX().toFloat() << "," << o1.getY().toFloat() << ")\n";
		
		flag = bsp(p1,p2,p3,o1);
		if(flag) 
			std::cout << "Yes\n";
		else 
			std::cout << "No\n";
	}
	// Test 2
	{
		Point const o2(12, 2);
		std::cout << "o2 " << "(" << o2.getX().toFloat() << "," << o2.getY().toFloat() << ")\n";
		
		flag = bsp(p1,p2,p3,o2);
		if(flag) 
			std::cout << "Yes\n";
		else 
			std::cout << "No\n";
	};
}