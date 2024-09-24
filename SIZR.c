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

