#include <stdio.h>
#include <stdlib.h>

int usage(char *name);

int main(int argc, char **argv)
{

  if(argc != 13) {return usage(argv[0]);}

  float S = atof(argv[1]);
  float Z = atof(argv[2]);
  float R = atof(argv[3]);
  float O = atof(argv[4]);
  float alpha = atof(argv[5]);
  float beta = atof(argv[6]);
  float delta = atof(argv[7]);
  float zeta = atof(argv[8]);
  float II = atof(argv[9]);
  float iota = atof(argv[10]);
  float mu = atof(argv[11]);
  float omicron = atof(argv[12]);
  float s, z, r, o;
  float t = 0,T = 100, dt = 0.1;
  // O = the number of robots 
  // iota = robot kill %
  // mu = robot creation rate
  // omicron = corps destruction

  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\t%f\n",t,S,Z,R,O);
    s = S;
    z = Z;
    r = R;
    o = O;

    S = s + (II - beta*s*z - delta*s - iota*s*o)*dt;
    Z = z + (beta*s*z + zeta*r - alpha*s*z - iota*z*o)*dt;
    R = r + (delta*s + alpha*s*z - zeta*r + iota*z*o + iota*s*o - omicron*o*r)*dt;
    O = o + (mu)*dt;
  }


  return 0;
}

int usage(char *name)
{
  fprintf(stderr,"usage: %s S Z R O alpha beta delta zeta II iota mu omicron\n",name);
  fprintf(stderr,"example: %s 100 1 0 0 0.005 0.0095 0.0001 0.0001 1 0.005 1 0.002\n",name);
  return 1;
}


