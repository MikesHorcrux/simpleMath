//
//  main.cpp
//  SimpleMath
//
//  Created by Mike  Van Amburg on 11/25/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
        bool repeat;
    do {
        repeat = false;
        int itemCategory;
        std::cout << "\n";
        std::cout << "****************************** \n";
        std::cout << "**  Item Category           ** \n";
        std::cout << "**  1 For Clouthing         ** \n";
        std::cout << "**  2 For Beauty Products   ** \n";
        std::cout << "**  3 For Grocery           ** \n";
        std::cout << "**  4 For Gardening         ** \n";
        std::cout << "**  5 For School supplies   ** \n";
        std::cout << "**  6 For Tobacco products  ** \n";
        std::cout << "****************************** \n\n";

        std::cout << "Enter the number for the items Category: ";
        
        std::cin >> itemCategory;
          //switch statement
          switch(itemCategory){
            case 0:
                  repeat = true;
            break;
            case 1:
                  std::cout << "case 1";
                  repeat = false;
            break;
            case 2:
                  std::cout << "case 2";
                  repeat = false;
            break;
            case 3:
                  std::cout << "case 3";
                  repeat = false;
            break;
            case 4:
                  std::cout << "case 4";
                  repeat = false;
            break;
            case 5:
                  std::cout << "case 5";
                  repeat = false;
            break;
            case 6:
                  std::cout << "case 6";
                  repeat = false;
            break;
            default:
                  std::cout << "Please enter a valid option";
              repeat = false;
          }
    }
        while(!repeat);
        return 0;
}
