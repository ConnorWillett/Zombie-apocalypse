#include <stdio.h>
#include <stdlib.h>

int usage(char *name);

int main(int argc, char **argv)
{

  if(argc != 15) {return usage(argv[0]);}

  float S = atof(argv[1]);
  float I = atof(argv[2]);
  float Z = atof(argv[3]);
  float R = atof(argv[4]);
  float Q = atof(argv[5]);
  float alpha = atof(argv[6]);
  float beta = atof(argv[7]);
  float delta = atof(argv[8]);
  float zeta = atof(argv[9]);
  float II = atof(argv[10]);
  float rho = atof(argv[11]);
  float kappa = atof(argv[12]);
  float theta = atof(argv[13]);
  float gamma = atof(argv[14]);
  
  float s, z, r, i, q;
  float t = 0,T = 2000, dt = 0.1;

  

  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\t%f\t%f\n",t,S,I,Z,R,Q);
    s = S;
    i = I;
    z = Z;
    r = R;
    q = Q;

    S = s + (II - beta*s*z - delta*s)*dt;
    I = i + (beta*s*z - rho*i - delta*i - kappa*i)*dt;
    Z = z + (rho*i + zeta*r - alpha*s*z - theta*z)*dt;
    R = r + (delta*s + delta*i + alpha*s*z - zeta*r + gamma*q)*dt;
    Q = q + (kappa*i + theta*z - gamma*q)*dt;
  }


  return 0;
}

int usage(char *name)
{
  fprintf(stderr,"usage: %s S I Z R Q alpha beta delta zeta II rho kapa theta gamma\n",name);
  fprintf(stderr,"example: %s 100 10 10 0 0 0.005 0.0095 0.0001 0.0001 1 0.005 0.001 0.0005 0.0007\n",name);
  return 1;
}


