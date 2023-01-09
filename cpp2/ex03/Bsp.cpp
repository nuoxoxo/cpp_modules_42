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

#include "Point.hpp"

static float    get_sign(Point, Point, Point);

/*
--------------------------------------
        @ (x1, y1)


            
            *

                        @ (x2, y2)


    @ (x3, y3)
--------------------------------------
*/


bool bsp( Point const a, Point const b, Point const c, Point const to_check)
{
    float   s1, s2, s3;
    bool    is_negative, is_positive;
    
    s1 = get_sign(to_check, b, a);
    s2 = get_sign(to_check, a, c);
    s3 = get_sign(to_check, c, b);

    is_negative = s1 < 0 || s2 < 0 || s3 < 0;
    is_positive = s1 > 0 || s2 > 0 || s3 > 0;

    return (is_negative || is_positive);
}


static float    get_sign(Point p1, Point p2, Point Ref)
{
    return
    (
        // (x1 - x) * 
        // (y2 - y)
        //  minus
        // (x2 - x) * 
        // (y1 - y)
        
        (p1.getX().toFloat() - Ref.getX().toFloat())
        *
        (p2.getY().toFloat() - Ref.getY().toFloat())
         - 
        (p2.getX().toFloat() - Ref.getX().toFloat())
        *
        (p1.getY().toFloat() - Ref.getY().toFloat())
    );
}

