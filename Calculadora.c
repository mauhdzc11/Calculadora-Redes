#include <stdio.h>

float division(int x,int y);
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x,int y);
int modulo(int x,int y);

float division(int x, int y)
{

}

int suma(int x, int y)
{

}

int resta(int x, int y)
{

}

int multiplicacion(int x, int y)
{

}

int modulo(int x, int y)
{
  while(x>=y)
  {
    x-=y;
  }
  return x;
}


int main()
{
  int x, y, opc;
  switch(opc)
  {
    case 1: //suma
      {
        printf("Ingrese el primer sumando");
        scanf(" %d ",&x );
        printf("Ingrese el segundo sumando");
        scanf("%d", &y);
        printf("La suma es: %d + %d = %d",x,y, suma(x,y) );
      }
    break;

    
  }
}
