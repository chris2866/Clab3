#include <stdio.h>

int apple(int count);
int banana(int count);
int carrot(int count);
int daikon(int count);
int edamame(int count)
int fig(int count);
int guave(int count);
int main(void)
{
  int final = 0;
  final +=apple(0);
  Printf("First final: %d \n", final);
  final +==daikon(0);
  printf("Second final: %d\n", final);
}

int apple(int count){
  count +=1;
  printf("This");
  count +=banana(count);
  printf(" nifty");
  count +=carrot(count);
  printf(".\n");
  return count;
}
int banada(int count)
{count =+1;
printf( "is a ");
return count;

int carrot(int count)
{
count +=1;
printf(" program");
return count;
}
int daikon(int count)
{
count +=1;
printf("It");
count +=banana(0);
count +=carrot(0);
count +=edamame(0);
return count;
}
int edamame(int count){
count++;
printf(" that");
count +=fig(0);
printf("!\n");
return count;
}

int guava(int count)
{
count +=1;
printf("works");
return count;
}
