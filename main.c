#include "ft_print.h"
#include <stdio.h>
int main(void)
{
  int count;
  int prueba;
  void *ptr;

  prueba = 10;
  ptr = &prueba;
  count = ft_printf("Hello %c \n %d \n %s \n %x \n %X \n %p \n %u",'A', 1234, "tonto", 2343544, 23434345, ptr,  850487504);
  printf(" \n count %d", count);
  // count = ft_printf("%p", ptr);
  printf("Hello %c \n %d \n %s \n %x \n %X \n %p \n %u",'A', 1234, "tonto", 2343544, 23434345, ptr, 850487504);
  return (0);
}
