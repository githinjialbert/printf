#include <stdio.h>

int main(void)
{
int number = 458;
float float_num = 6.78;

printf("Number with zero padding: %06d\n", number);

printf("Float number with zero padding: %07.2f\n", float_num);

return (0);
}
