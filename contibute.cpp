void multiply(ComplexNumbers const &c2)
  {
    int firsts=real*c2.real;
    int outers=real*c2.imaginary;
    int inners=imaginary*c2.real;
    int lasts=(-1)*(imaginary*c2.imaginary);
    real=firsts+lasts;
    imaginary=outers+inners;
  }
