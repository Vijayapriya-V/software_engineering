#include <stdio.h>
int main()
{
  int i = 0;
  printf("Before loop, i=%d\n", i);
  while( i < 5 )
    printf( "i = %d\n", i++ );
  printf( "After loop, i = %d\n", i );
  return 0;
}




#include <stdio.h>
int main()
{
  int month;
  do {
    printf( "Please enter the month of your birth > " );
    scanf( "%d", &month );
  } while ( month < 1 || month > 12 );return 0;
}
