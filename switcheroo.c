# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
  int ray[10];
  ray[0] = 0;
  srand( time(NULL) );
  ray[1] = rand();
  ray[2] = rand();
  ray[3] = rand();
  ray[4] = rand();
  ray[5] = rand();
  ray[6] = rand();
  ray[7] = rand();
  ray[8] = rand();
  ray[9] = rand();

  printf("0; %d\n", ray[0]);
  printf("1; %d\n", ray[1]);
  printf("2; %d\n", ray[2]);
  printf("3; %d\n", ray[3]);
  printf("4; %d\n", ray[4]);
  printf("5; %d\n", ray[5]);
  printf("6; %d\n", ray[6]);
  printf("7; %d\n", ray[7]);
  printf("8; %d\n", ray[8]);
  printf("9; %d\n", ray[9]);

  int ray2[10];

  int *rp = ray;
  int *r2p = ray2;

  *(r2p + 3) = rp[9];
  r2p[1] = rp[8];
  r2p[2] = rp[7];
  r2p[3] = rp[6];
  r2p[4] = rp[5];
  r2p[5] = rp[4];
  r2p[6] = rp[3];
  r2p[7] = rp[2];
  r2p[8] = rp[1];
  r2p[9] = rp[0];

  printf("2 : 0 : %d\n", *(r2p + 0));
  printf("2 : 1 : %d\n", r2p[1]);
  printf("2 : 2 : %d\n", r2p[2]);
  printf("2 : 3 : %d\n", r2p[3]);
  printf("2 : 4 : %d\n", r2p[4]);
  printf("2 : 5 : %d\n", r2p[5]);
  printf("2 : 6 : %d\n", r2p[6]);
  printf("2 : 7 : %d\n", r2p[7]);
  printf("2 : 8 : %d\n", r2p[8]);
  printf("2 : 9 : %d\n", r2p[9]);
}
