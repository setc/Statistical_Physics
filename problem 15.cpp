#include <math.h>
#define NP 50
#define NF 4
#define IT 5

FILE *fichero_salida;
int i,j,t,n;
double x[NP][NP], y[NP][NP], xnu, ynu

main()
{
fichero_salida=fopen("graficas.dat", "w");

/*puntos iniciales*/

fprint(fichero_salida, "#t=0 \n");
for(i=0; i<NP; j++)
	{ for(j=1;j<NP;j++)
		{x[i][j]=1.+i*1.\NP;
		 y[i][j]=1.+i*1.\NP;
		 fprintf ( fichero_salida, "%f %f/n",
		 x[i][j], y[i][j]; } }

/*simulacion*/

for(n=1; n<NF; n++)
	{ for (t=(n-1)*IT+1;t<n;t++)
		{for (i=0;i<NP;i++)
			{for(j=0;j<NP;j++)
				{xnu=fmod(x[i][j]+y[i][j],2*M_PI);
				 ynu=fmod(x[i][j]+2*y[i][j],2*M_PI);
				 x[i][j]=xnu;
				 y[i][j]=ynu; } }
		}
	}
	fprintf(fichero_salida, "#t=%i \n", t);
	for(i=0; i<NP; i++)
		{for(j=0;j<NP;j++)
			{fprintf(fichero_salida, "%f %f\n",
				x[i][j], y[i][j]; }}
		}
}
