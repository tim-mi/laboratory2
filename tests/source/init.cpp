#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    double a = 5;
    double b = 9;

    double rt = sum( a, b);
      
      REQUIRE( rt == 14);
}
SCENARIO("calculator sub", "[sub]") {
    double a = 10;
    double b = 1;
    
    double rt = sub( a, b);
    
      REQUIRE( rt == 9);
}
SCENARIO("calculator div", "[div]"){
    double a = 16;
    double b = 4;
    
    double rt = div( a, b);
    
      REQUIRE( rt == 4);
}
SCENARIO("calculator mult","[mult]"){
    double a = 6;
    double b = 7;
    
    double rt = mult( a, b);
    
      REQUIRE( rt == 42);
}
SCENARIO("calculator pow","[pow]"){
    double a = 2;
    unsigned int b = 10;
    
    double rt = pow( a, b);
    
      REQUIRE( rt == 1024);
}
SCENARIO("calculator square","[square]"){
    double a = 36;
    
    double rt = square( a);
    
      REQUIRE( rt == 6);
}
