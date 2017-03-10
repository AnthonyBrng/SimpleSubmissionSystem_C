#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("CHAR_MIN:%d\nCHAR_MAX:%d\nINT_MIN:%d\nINT_MAX:%d\nFLT_MIN:%e\nFLT_MAX:%e\nDBL_MIN:%e\nDBL_MAX:%e\n", CHAR_MIN, CHAR_MAX, INT_MIN, INT_MAX,FLT_MIN,FLT_MAX, DBL_MIN, DBL_MAX);
    return 0;
}