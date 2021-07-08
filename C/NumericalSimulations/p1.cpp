#include<cstdio>
#include<cmath>

using namespace std;

#define N 10
#define f(x) (pow(x,3)-pow(x,2)-2)
#define EPSILON 0.005


double *a,*b,*c;


int main(){
   // Método iterativo da bisseção para encontar a raiz de uma equacao náo linear
   
   a = new double[N+1];
   b = new double[N+1];
   c = new double[N+1];
   a[0] = 1;
   b[0] = 2;
   
   for(int i=0; i<=N; i++)
   {
           c[i] = (a[i]+b[i])/2;
           if(f(a[i])*f(c[i]) > 0){
              a[i+1] = c[i];
              b[i+1] = b[i];
           }
           else
           {
              b[i+1] = c[i];
              a[i+1] = a[i]; 
           }
           
           printf("%-5d%-10.3lf%-10.3lf%-10.3lf%-10.3lf%-10.3lf",i,a[i],b[i],c[i],f(a[i]),f(c[i]));
           
           if(i>0)
           {
                  double error=fabs(c[i]-c[i-1]);
                  printf("%-10.3lf\n", error);
                  if(error<EPSILON)
                  {
                     printf("A solucao de x=%.3lf apos %d iteracoes",c[i],i-1);              
                     break;
                  }   
           }
           else
             printf("\n");
   } 
   
   
   delete a,b,c;
   getchar();
   return 0;    
}
