  for(t; t < T; t += dt)
  {
    printf("%f\t%f\t%f\t%f\t%f\n",t,S,I,Z,R);
    S = s + (II - beta*s*z - delta*s + c*z)*dt;
    I = i + (beta*s*z - rho*i - delta*i)*dt;
    Z = z + (rho*i + zeta*r - alpha*s*z - c*z)*dt;
    R = r + (delta*s + delta*i + alpha*s*z - zeta*r)*dt;
  }

