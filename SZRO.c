  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\t%f\n",t,S,Z,R,O);

    S = s + (II - beta*s*z - delta*s - iota*s*o)*dt;
    Z = z + (beta*s*z + zeta*r - alpha*s*z - iota*z*o)*dt;
    R = r + (delta*s + alpha*s*z - zeta*r + iota*z*o + iota*s*o - omicron*o*r)*dt;
    O = o + (mu)*dt;
  }

