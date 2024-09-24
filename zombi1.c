#include <stdio.h>
#include <stdlib.h>

int usage(char *name);

int main(int argc, char **argv)
{

  if(argc != 9) {return usage(argv[0]);}

  float S = atof(argv[1]);
  float Z = atof(argv[2]);
  float R = atof(argv[3]);
  float alpha = atof(argv[4]);
  float beta = atof(argv[5]);
  float delta = atof(argv[6]);
  float zeta = atof(argv[7]);
  float II = atof(argv[8]);
  float s, z, r;
  float t = 0,T = 100, dt = 0.1;
  

  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\n",t,S,Z,R);
    s = S;
    z = Z;
    r = R;

    S = s + (II - beta*s*z - delta*s)*dt;
    Z = z + (beta*s*z + zeta*r - alpha*s*z)*dt;
    R = r + (delta*s + alpha*s*z - zeta*r)*dt;
  }


  return 0;
}

int usage(char *name)
{
  fprintf(stderr,"usage: %s S Z R alpha beta delta zeta II\n",name);
  fprintf(stderr,"example: %s 100 1 0 0.005 0.0095 0.0001 0.0001 1\n",name);
  return 1;
}


