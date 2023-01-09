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
	// Test 1
	{
		Point const p1(0, 0);
		Point const p2(10, 30);
		Point const	p3(20, 0);

		//           b {10,30}
		//             / \
		//            /   \
		//           /     \
		//          /   . P {10, 15}
		//         /         \
		//  a {0,0} ---------- c {20,0} 

		std::cout << CYAN "Point 1 \ta " << REST "{" << p1.getX().toFloat() << ", " << p1.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 2 \tb " << REST "{" << p2.getX().toFloat() << ", " << p2.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 3 \tc " << REST "{" << p3.getX().toFloat() << ", " << p3.getY().toFloat() << "}\n";

		Point const	P(10, 15);
		std::cout << YELL "Inspect \tP " << REST "{" << P.getX().toFloat() << ", " << P.getY().toFloat() << "}\n";
		
		if (bsp(p1, p2, p3, P))
			std::cout << "Result  \t" GREEN "Yes it is." REST;
		else
			std::cout << "Result  \t" RED "No it is not." REST;
		std::cout << nl2;
	}
	// Test 2
	{
		Point const p1(0, 0);
		Point const p2(10, 30);
		Point const	p3(20, 0);

		//				.	b, `P` {10,30}
		//             / \
		//            /   \
		//           /     \
		//          /       \
		//         /         \
		//  a {0,0} ---------- c {20,0}

		std::cout << CYAN "Point 1 \ta " << REST "{" << p1.getX().toFloat() << ", " << p1.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 2 \tb " << REST "{" << p2.getX().toFloat() << ", " << p2.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 3 \tc " << REST "{" << p3.getX().toFloat() << ", " << p3.getY().toFloat() << "}\n";

		Point const	P(10, 30);
		std::cout << YELL "Inspect \tP " << REST "{" << P.getX().toFloat() << ", " << P.getY().toFloat() << "}\n";
		
		if (bsp(p1, p2, p3, P))
			std::cout << "Result  \t" GREEN "Yes it is." REST;
		else
			std::cout << "Result  \t" RED "No it is not." REST;
		std::cout << nl2;
	}
	// Test 3
	{
		Point const p1(0, 0);
		Point const p2(10, 30);
		Point const	p3(20, 0);

		//           	b
		//				.
		//             / \
		//            /   \
		//           /     \
		//          /       \
		//         /         \
		//  a {0,0} ---------- c {20,0} 

		std::cout << CYAN "Point 1 \ta " << REST "{" << p1.getX().toFloat() << ", " << p1.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 2 \tb " << REST "{" << p2.getX().toFloat() << ", " << p2.getY().toFloat() << "}\n";
		std::cout << CYAN "Point 3 \tc " << REST "{" << p3.getX().toFloat() << ", " << p3.getY().toFloat() << "}\n";

		Point const	P(1000, 3000);
		std::cout << YELL "Inspect \tP " << REST "{" << P.getX().toFloat() << ", " << P.getY().toFloat() << "}\n";
		
		if (bsp(p1, p2, p3, P))
			std::cout << "Result  \t" GREEN "Yes it is." REST;
		else
			std::cout << "Result  \t" RED "No it is not." REST;
		std::cout << nl2;
	}
}