#include <stdio.h>
#include <stdlib.h>

int usage(char *name);

int main(int argc, char **argv)
{

  if(argc != 11) {return usage(argv[0]);}

  float S = atof(argv[1]);
  float I = atof(argv[2]);
  float Z = atof(argv[3]);
  float R = atof(argv[4]);
  float alpha = atof(argv[5]);
  float beta = atof(argv[6]);
  float delta = atof(argv[7]);
  float zeta = atof(argv[8]);
  float II = atof(argv[9]);
  float rho = atof(argv[10]);
  float s, z, r, i;
  float t = 0,T = 1000, dt = 0.1;
  

  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\t%f\n",t,S,I,Z,R);
    s = S;
    i = I;
    z = Z;
    r = R;

    S = s + (II - beta*s*z - delta*s)*dt;
    I = i + (beta*s*z - rho*i - delta*i)*dt;
    Z = z + (rho*i + zeta*r - alpha*s*z)*dt;
    R = r + (delta*s + delta*i + alpha*s*z - zeta*r)*dt;
  }


  return 0;
}

int usage(char *name)
{
  fprintf(stderr,"usage: %s S I Z R alpha beta delta zeta II rho\n",name);
  fprintf(stderr,"example: %s 100 10 10 0 0.005 0.0095 0.0001 0.0001 1 0.005\n",name);
  return 1;
}


