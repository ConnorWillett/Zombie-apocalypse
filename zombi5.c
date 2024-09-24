    if(kill % 200 == 0)
    {
      if(n >= nf + 1)
      {
        continue;
      }
      Z = z - k*n*z;
      R = r + k*n*z;
      kill++;
      n++;
      
      continue;
    }
    kill++;

