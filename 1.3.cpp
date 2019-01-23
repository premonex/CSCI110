#include <iostream>
using namespace std;

int main() {
  int integer1, integer2;

  printf( "Please enter two integers.\n" );
  scanf( "%d%d", &integer1, &integer2 );

  if ( integer1 > integer2 ) {
    printf( "%d is larger.\n", integer1 );
  }

  if ( integer2 > integer1 ) {
    printf( "%d is larger.\n", integer2 );
  }

  if ( integer1 == integer2 ) {
    printf("These numbers are equal.\n");
  }

  return 0;

}
