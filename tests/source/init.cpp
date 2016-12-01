#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float a = 5;
    int b = 9;

    double rt = sum( a, b);
      
      REQUIRE( rt == 14);
}
SCENARIO("calculator sub", "[sub]") {
    float a = 10;
    int b = 1;
    
    double rt = sub( a, b);
    
      REQUIRE( rt == 9);
}
SCENARIO("calculator div", "[div]"){
    float a = 16;
    int b = 0;
    
    double *rt = div( a, b);
    
      REQUIRE( rt == nullptr);
}
SCENARIO("calculator mult","[mult]"){
    float a = 6;
    int b = 7;
    
    double rt = mult( a, b);
    
      REQUIRE( rt == 42);
}
SCENARIO("calculator pow","[pow]"){
    float a = 2;
    long b = 10;
    
    double rt = pow( a, b);
    
      REQUIRE( rt == 1024);
}
SCENARIO("calculator square","[square]"){
    float a = -5;
    
 double *rt = square( a);
    
      REQUIRE( rt == nullptr);
}
SCENARIO("calculator squar","[squar]"){
    int b = 81;
    
    double rt =*squar( b);
    
      REQUIRE( rt == 9);
}
