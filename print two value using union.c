#include<stdio.h>
void main()
{
    union two
    {       //it print first value who come first
     int a; //we can declare only one data member at a time
     float b; //size of union is value of highest data type
    };

}
