/* float arithmetics */
/* Assume that f is fixed point number, n is integer */

#define fp 1<<14

int
int_to_float (int i)
{
  return i * fp;
}

int
float_to_int_zero (int f)
{
  return f / fp;
}

int
float_to_int_near (int f)
{
  return (f>=0) ? (f+(fp/2))/fp : (f-(fp/2))/fp;
}

int
float_sum_float (int f1, int f2)
{
  return f1 + f2;
}

int
float_sub_float (int f1, int f2)
{
  return f1 - f2;
}

int
float_sum_int (int f, int n)
{
  return f + (n * fp);
}

int
float_sub_int (int f, int n)
{
  return f - (n * fp);
}

int
int_sub_float (int n, int f)
{
  return (n * fp) - f;
}

int
float_mul_float (int f1, int f2)
{
  return (int) (((int64_t) f1) * f2 / fp);
}

int
float_mul_int (int f, int n)
{
  return f*n;
}

int
float_div_float (int f1, int f2)
{
  return (int) (((int64_t) f1) * fp / f2);

}

int
float_div_int (int f, int n)
{
  return f/n;
}
