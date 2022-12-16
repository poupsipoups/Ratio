#include <iostream>
#include <iomanip>
#include <math.h>

#include "Ratio.hpp"



int main() {
    /*
    *
    * OPERATORS CLASSIC TESTS
    * 
    */
    ratio::Ratio<int> r1(6,12);
    ratio::Ratio<int> r2(3,-4);
    ratio::Ratio<int> r3(r1);
    int value = 3;
    float fvalue = 14.21;
    float negfvalue = -2.5;

    std::cout << "Ratio 1 (r1) : " ;
    r1.display();
    std::cout << "Ratio 2 (r2) : " ;
    r2.display();
    std::cout << "Ratio 3 (r3) : " ;
    r3.display();
    std::cout << "Value (value) : " << value << std::endl;
    std::cout << "Float Value (fvalue) : " << fvalue << std::endl;
    std::cout << "Negative Float Value (negfvalue) : " << negfvalue << std::endl << std::endl;

    std::cout << "Addition (r1 + r2): ";
    (r1+r2).display();

    std::cout << "Addition (r1 + value): ";
    (r1+value).display();

    std::cout << "Subtraction (r1 - r2): ";
    (r1-r2).display();

    std::cout << "Subtraction (r1 - value): ";
    (r1-value).display();

    std::cout << "Multiplication (r1 * r2): ";
    (r1*r2).display();

    std::cout << "Multiplication (r1 * value): ";
    (r1*value).display();

    std::cout << "Division (r1 / r2): " ;
    (r1/r2).display();

    std::cout << "Division (r1 / value): " ;
    (r1/value).display();

    std::cout << "Inverse de r2: ";
    (r2.inverse()).display();

    std::cout << "Abs de r2: ";
    (r2.abs()).display();
    
    std::cout << "Conversion de fvalue en ratio r4 : " ;

    ratio::Ratio<int> r4(fvalue);
    r4.display();
    std::cout << (double)r4.getNum()/r4.getDenom() << std::endl;

    std::cout << "Conversion de negfvalue en ratio r5 : " ;
    ratio::Ratio<int> r5(negfvalue);
    r5.display();

    std::cout << "Test r1 == r2 : ";
    std::cout << (r1 == r2) <<std::endl;

    std::cout << "Test r1 == r3 : ";
    std::cout << (r1 == r3) <<std::endl;

    std::cout << "Test r1 != r2 : ";
    std::cout << (r1 != r2) <<std::endl;

    std::cout << "Test r1 != r3 : ";
    std::cout << (r1 != r3) <<std::endl;

    std::cout << "Test r1 < r2 : ";
    std::cout << (r1 < r2) << std::endl;

    std::cout << "Test r1 <= r3 : ";
    std::cout << (r1 <= r3) <<std::endl;

    std::cout << "Test r1 > r2 : ";
    std::cout << (r1 > r2) <<std::endl;


    std::cout << "Essai d'affichage avec ostream : " <<std::endl;
    std::cout<< r1;

    // std::cout << "pi : "<<  ratio::Pi() << std::endl;

    try {
        // r1.infinite(); //passe pas par l'exception car noexcept
        // ratio::Ratio<int> flip(1,0);
    }
    #if 1
        catch(const RatioException &e){
            std::cerr << e.what() << std::endl;
        }
    #else
        catch(const std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    #endif

    // std::cout << r1.infinite();


    try {
      //  Ratio r5(2,0);
    }
    #if 1
        catch(const RatioException &e){
            std::cerr << e.what() << std::endl;
        }
    #else
        catch(const std::exception &e){
            std::cerr << e.what() << std::endl;
        }
    #endif
    
    // ratio::Ratio<int> ratioTest(24,7);

    // std::cout << "inFloat is : " << ratioTest << std::endl;
    // float test = ratioTest.ConvertRatioToFloat();

    // std::cout << "inFloat in float is : " << test << std::endl;


    std::cout << "test de troncature : " << std::endl;
    float t = 10.517968;
    std::cout<< "t is : " << std::setprecision(20) << t << std::endl;
    t = trunc(t*100);
    std::cout << "t multiply: " << std::setprecision(20) << t << std::endl;
    std::cout << "t tronc: " << std::setprecision(20) << t/100<< std::endl;
    
    
    
    // t = round(t*100)/100;
    // std::cout << "t tronc: " << std::setprecision(20) << t<< std::endl;


    std::cout << "test namespace : " << std::endl;
    std::cout << "0 is " << ratio::Ratio<int>::zero() << std::endl;
    // std::cout << "infinite is " << ratio::ratio::Ratio<int>::infinite() << std::endl;
    std::cout << "pi is " << ratio::Ratio<int>::pi() << std::endl;










   

    

    return 0;
}
