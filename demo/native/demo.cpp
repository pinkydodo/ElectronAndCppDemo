#include "demo.h"
#include <stdio.h>
// extern "C"
// {
CallBack g_callback = NULL;
double Add(double a, double b) {
	g_callback( 31, "pinky");
    return a+b;
}

void setCallback( CallBack callback )
{
g_callback = callback;
printf("setCallback");
}

// }