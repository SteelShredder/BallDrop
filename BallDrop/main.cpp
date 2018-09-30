//
//  main.cpp
//  BallDrop
//
//  Created by Gavin Gavington on 9/29/18.
//


/*
 Program flow
 inputHeight in metres
 velocity = 0
 Gravity in myConstant namespace
 Output distance fallen for 0,1,2,3,4,5
 Distance fallen = gravity * seconds * seconds / 2
 
 */

#include <iostream>
#include "myConstants.h"
double distanceFallen(int tSeconds)
{
    return constants::gravity * tSeconds * tSeconds / 2;
}
int main()
{
    std::cout << "Input height in meters" << std::endl;
    double height;
    std::cin >> height;
    if (height-distanceFallen(0) > 0)
    {
        std::cout << distanceFallen(0) << std::endl;;
    }
    height -= distanceFallen(0);
    if (height-distanceFallen(1) > 0)
    {
        std::cout << distanceFallen(1) << std::endl;;
    }
    height -= distanceFallen(1);
    if (height-distanceFallen(2) > 0)
    {
        std::cout << distanceFallen(2) << std::endl;;
    }
    height -= distanceFallen(2);
    if (height-distanceFallen(3) > 0)
    {
        std::cout << distanceFallen(3) << std::endl;;
    }
    height -= distanceFallen(3);
    if (height-distanceFallen(4) > 0)
    {
        std::cout << distanceFallen(4) << std::endl;;
    }
    height -= distanceFallen(4);
    if (height-distanceFallen(5) > 0)
    {
        std::cout << distanceFallen(5) << std::endl;;
    }
    height -= distanceFallen(5);
    return 0;
}
