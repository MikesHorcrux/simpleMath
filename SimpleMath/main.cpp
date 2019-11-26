//
//  main.cpp
//  SimpleMath
//
//  Created by Mike  Van Amburg on 11/25/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//

#include <iostream>
#include <numeric>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //Varibles
    double item;
    double tax;
    
    //taxes are init
    double taxClothingRate = 0.06;
    double taxBeautyRate = 0.07;
    double taxGroceryRate = 0.03;
    double taxGardeningRate = 0.06;
    double taxSchoolSuppliesRate = 0.03;
    double taxTobaccoProductsRate = 0.1;
    //taxes amount
    double taxClothing;
    double taxBeauty;
    double taxGrocery;
    double taxGardening;
    double taxSchoolSupplies;
    double taxTobaccoProducts;
    
    
    
    
//    Arrays
    //clothing array
    double clothingItem[50] = {0.0}; //alocates memory
    int clothingItems = 0;
    double clothingSum = 0.00;
    
    //clothing array
    double beautyItem[50] = {0.0}; //alocates memory
    int beautyItems = 0;
    double beautySum = 0.00;
    
    
    
    
    bool repeat;
    do {
        int itemCategory;
//        Prompts the user for category and price of the product
        std::cout << "\n";
        std::cout << "****************************** \n";
        std::cout << "**  Item Category           ** \n";
        std::cout << "**  1 For Clouthing         ** \n";
        std::cout << "**  2 For Beauty Products   ** \n";
        std::cout << "**  3 For Grocery           ** \n";
        std::cout << "**  4 For Gardening         ** \n";
        std::cout << "**  5 For School supplies   ** \n";
        std::cout << "**  6 For Tobacco products  ** \n";
        std::cout << "**  0 For total  ** \n";
        std::cout << "****************************** \n\n";

        std::cout << "Enter the number for the items Category: ";
        std::cin >> itemCategory;
        
        
          //switch statement for users input.
          switch(itemCategory){
            case 0:
                  repeat = true;
                  //0 is entered and program ends
            break;
            case 1:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  
                  //takes users input of item cost and places it in array clothingItem
                  clothingItem[clothingItems] = item;
                  clothingItems++;

                  repeat = false;
            break;
            case 2:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  
                  //takes users input of item cost and places it in array clothingItem
                  beautyItem[beautyItems] = item;
                  beautyItems++;
                  repeat = false;
                  break;
            case 3:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  tax = item * taxGroceryRate;
                  std::cout << "your item plus taxes " << tax + item;
                  std::cout << "taxes: " << tax;
                  repeat = false;
            break;
            case 4:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                 tax = item * taxGardeningRate;
                  std::cout << "your item plus taxes " << tax + item;
                  std::cout << "taxes: " << tax;
                  repeat = false;
            break;
            case 5:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  tax = item * taxSchoolSuppliesRate;
                  std::cout << "your item plus taxes " << tax + item;
                  std::cout << "taxes: " << tax;
                  repeat = false;
            break;
            case 6:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  tax = item * taxTobaccoProductsRate;
                  std::cout << "your item plus taxes " << tax + item;
                  std::cout << "taxes: " << tax;
                  repeat = false;
            break;
            default:
                  std::cout << "Please enter a valid option";
              repeat = false;
          }
    }
        //ounce repeat is false the program will stop
        while(!repeat);
        
    //clothing
        std::cout << "\n";
        clothingSum = std::accumulate(clothingItem, clothingItem + clothingItems, clothingSum);
       //tax is calculated at 6%
        taxClothing = clothingSum * taxClothingRate;
        
    
    //beauty
         std::cout << "\n";
         beautySum = std::accumulate(beautyItem, beautyItem + beautyItems, beautySum);
        //tax is calculated at 6%
         taxBeauty = beautySum * taxBeautyRate;
         
    
    //sum of order.
    std::cout << "Total Order: "<< clothingSum + beautySum << "\n";
    std::cout << "Total Order: "<< taxClothing + taxBeauty << "\n";
    
    

        return 0;
}
