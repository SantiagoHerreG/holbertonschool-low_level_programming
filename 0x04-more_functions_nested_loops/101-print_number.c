void iprint (int n)
  { 
    if( n > 9 )
      { int a = n / 10;

        n -= 10 * a;
        iprint(a);
      }
    putchar('0'+ n);
  }
