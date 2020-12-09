#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int
main(int argc, char *argv[])
{ 
  int x,z,id,k;
  for (k = 0; k < 10; k++){
    id = fork();
    if (id < 0){
	printf(1,"%d failed in fork!\n", getpid());
    }else if( id == 0){
     printf(1,"Child %d created\n", getpid());
        for ( z = 0; z < 10000000.0; z += 0.01 )
        	x =  x + 2*2 ;
	break;
    }else{
      printf(1,"Parent %d creating child %d\n", getpid(),id);
      wait();
	}
  }
  exit();

}
