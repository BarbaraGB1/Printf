#include "ft_print.h"
#include <stdio.h>
int main(void)
{
  int count;

  // count = ft_printf("Hello %c \n %d \n %s",'A', 1234, "tonto");
  // printf(" \n count %d", count);
  count = ft_printf("Hello %x \n %X", 843503846, 843503846);
  printf(" \n count %d \n %x \n %X", count, 843503846, 843503846);
  return (0);
}
