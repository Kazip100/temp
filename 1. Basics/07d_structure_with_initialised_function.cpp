// Structure and functions using a function for initialising variables

#include<iostream>
using namespace std;

struct Rectangle
{
    int length, breadth;
};

void initialise(Rectangle *r, int l, int b)
{
    r -> length = l ;
    r -> breadth = b;
}

// int area (int a , int b)
// instead of taking length and breadth as seperate parameters, a function can directly
// take structure as a parameter (which will also contain length and breadth as parameter)

int area (Rectangle r)
{
    // since the function can directly access the member of a structure Rectangle r, 
    // therefore dot opeartor is used
    return r.length*r.breadth;
}

int perimeter (Rectangle r)
{   
    return 2*(r.length + r.breadth);
}

int main()
{
    Rectangle r = {0,0};         // initialising the member of structure
    int l=2, b=4;
    initialise(&r, l, b);
    
    
    // instead of taking length and breadth as seperate parameters, a function can directly
    // take structure as a parameter (which will also contain length and breadth as parameter)
    
    int ar = area (r);
    int peri = perimeter(r);
    cout << ar << " " << peri;
    
}


