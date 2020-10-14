#include<stdlib.h>
#include <string.h>

#include "api/c/foo.h"

int foo(char *p, char **q, char *x, char **y, char *v, int flag){
  int f = 0;
  if( flag % 2 == 0 ){
    if(flag > 10){
      free(p);
    }else{
      *q = malloc(100);
    }
    f = 1;
  }else{
    if(flag > 10){
      free(x);
    }else{
      *y = malloc(200);
    }
    f = 2;
  }
  free(v);
  return f;  
}
