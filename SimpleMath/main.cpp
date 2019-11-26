//
//  main.cpp
//  SimpleMath
//
//  Created by Mike  Van Amburg on 11/25/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//
#include <cmath>
#include <iostream>
#include <numeric>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //Varibles
    double item;
    
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
    
    //beauty array
    double beautyItem[50] = {0.0}; //alocates memory
    int beautyItems = 0;
    double beautySum = 0.00;
    
    //grocrey array
    double groceryItem[50] = {0.0}; //alocates memory
    int groceryItems = 0;
    double grocerySum = 0.00;
    
    //gardening array
    double gardeningItem[50] = {0.0}; //alocates memory
    int gardeningItems = 0;
    double gardeningSum = 0.00;
    
    //school array
     double schoolItem[50] = {0.0}; //alocates memory
     int schoolItems = 0;
     double schoolSum = 0.00;
    
    //tabacco array
    double tabaccoItem[50] = {0.0}; //alocates memory
    int tabaccoItems = 0;
    double tabaccoSum = 0.00;
    
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
        
        try
        {
            
        }
        catch(const char* msg) {
            std::cout << "Enter A VALID number";
            itemCategory = 0;  // this line makes the program start again
        }

          //switch statement for users input.
          switch(itemCategory){
            case 0:
                  repeat = true;
                  //0 is entered and program ends
            break;
            case 1:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  clothingItem[clothingItems] = item;
                  clothingItems++;

                  repeat = false;
            break;
            case 2:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  beautyItem[beautyItems] = item;
                  beautyItems++;
                  repeat = false;
                  break;
            case 3:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  groceryItem[groceryItems] = item;
                  groceryItems++;
                  repeat = false;
                  break;
            case 4:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  gardeningItem[gardeningItems] = item;
                  gardeningItems++;
                  repeat = false;
                  break;
            break;
            case 5:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  schoolItem[gardeningItems] = item;
                  schoolItems++;
                  repeat = false;
                  break;
            break;
            case 6:
                  std::cout << "Enter the cost for the item: ";
                  std::cin >> item;
                  tabaccoItem[tabaccoItems] = item;
                  tabaccoItems++;
                  repeat = false;
                  break;
            break;
            default:
                  std::cout << "Please enter a valid option";
                  repeat = false;
          }
    }
        //ounce repeat is false the program will stop
        while(!repeat);
  
    
//    calculates the total and the taxes paid
    //clothing
        std::cout << "\n";
        clothingSum = std::accumulate(clothingItem, clothingItem + clothingItems, clothingSum);
       //tax is calculated at 6%
        taxClothing = clothingSum * taxClothingRate;
        
    
    //beauty
         std::cout << "\n";
         beautySum = std::accumulate(beautyItem, beautyItem + beautyItems, beautySum);
         taxBeauty = beautySum * taxBeautyRate;
    
    //grocery
     std::cout << "\n";
     grocerySum = std::accumulate(groceryItem, groceryItem + groceryItems, grocerySum);
     taxGrocery = grocerySum * taxGroceryRate;
    
    //gardening
    std::cout << "\n";
    gardeningSum = std::accumulate(gardeningItem, gardeningItem + gardeningItems, gardeningSum);
    taxGardening = gardeningSum * taxGardeningRate;
    //School
    std::cout << "\n";
    schoolSum = std::accumulate(schoolItem, schoolItem + schoolItems, schoolSum);
    taxSchoolSupplies = schoolSum * taxSchoolSuppliesRate;
    //Tabacco
    std::cout << "\n";
    tabaccoSum = std::accumulate(tabaccoItem, tabaccoItem + tabaccoItems, tabaccoSum);
    taxTobaccoProducts = tabaccoSum * taxTobaccoProductsRate;
         
    
    //sum of order.
    
    double total = round(clothingSum + beautySum +grocerySum + gardeningSum + schoolSum + tabaccoSum);
    double taxes = round( taxClothing + taxBeauty + taxGrocery + taxGardening + taxSchoolSupplies + taxTobaccoProducts);
    double grandTotal = round(total + taxes);
    std::cout << "Total before tax: "<< total  << "\n";
    std::cout << "Taxes: "<< taxes << "\n";
    std::cout << " Grand Total: "<< grandTotal << "\n";
    
    
    

        return 0;
}
