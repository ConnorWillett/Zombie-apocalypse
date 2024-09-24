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
