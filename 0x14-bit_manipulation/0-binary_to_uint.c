#include "main.h"
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (b == NULL)
return 0;

while (b[i] == '0' || b[i] == '1')
{
num <<= 1;
num += b[i]-'0';
i++;
}
return num;
}
