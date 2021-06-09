#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc == 3){
    symln(argv[1], argv[2]);  
  }

  exit(0);
}
