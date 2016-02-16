//This is the line causing issue in the master branch
#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}

float sub ()
{
    return x - y;
}

float mul()
{
	return x*y;
}

float div()
{
	return x/y;
}

int main()
{
    float a, b, r;
    char op;
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
                      break;
	   case '-' : r = sub(a,b);
		      break;
	   case '*' : r = mul(a,b);
		      break;
	   case '/' : r = div(a,b);
		      break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');
    
    return 0; //this is the end
}
