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

