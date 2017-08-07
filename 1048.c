
#include <stdio.h>
int main () {

float sal;

scanf ("%f",&sal);

if (sal >=0.0 && sal <= 400.00){



printf ("Novo salario: %.2f\n",sal + (sal * 15/100.00));
printf ("Reajuste ganho: %.2f\n",sal * 15/100.00);
printf ("Em percentual:  %i %%\n",15);

}

else if (sal >=400.01 && sal <= 800.00){



printf ("Novo salario: %.2f\n",sal + (sal * 12/100.00));
printf ("Reajuste ganho: %.2f\n",sal * 12/100.00);
printf ("Em percentual:  %i %%\n",12);

}
else if (sal >=800.01 && sal <= 1200.00){



printf ("Novo salario: %.2f\n",sal + (sal * 10/100.00));
printf ("Reajuste ganho: %.2f\n",sal * 10/100.00);
printf ("Em percentual:  %i %%\n",10);

}
else if (sal >=1200.01 && sal <= 2000.00){



printf ("Novo salario: %.2f\n",sal + (sal * 7/100.00));
printf ("Reajuste ganho: %.2f\n",sal * 7/100.00);
printf ("Em percentual:  %i %%\n",7);

}
else if (sal > 2000.00){



printf ("Novo salario: %.2f\n",sal + (sal * 4/100.00));
printf ("Reajuste ganho: %.2f\n",sal * 4/100.00);
printf ("Em percentual:  %i %%\n",4);

}
return 0;

}
