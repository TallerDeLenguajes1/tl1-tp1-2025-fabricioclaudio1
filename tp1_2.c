#include <stdio.h>


int CuadradoNum(int num);
void CuadradoNumVoid(int num);
void MostrarDirecYContenido(int var);
void Invertir(int a,int b);
void Orden(int a,int b);



int main(){

    int select;
    while (select != 5)
    {
      printf("_______________________________________________\n");
      printf("Seleccione una opcion\n");
      printf("1 Cuadrado de un numero entero\n");
      printf("2 Direccion y contenido de un numero entero\n");
      printf("3 Invertir dos numeros enteros\n");
      printf("4 Ordenar dos numeros enteros\n");
      printf("5 Salir\n");
      printf("_______________________________________________\n");
      scanf("%d",&select); 
      
      switch (select)
      {
      case 1:
      printf("**Cuadrado de un numero entero**\n");
      int num;
      int numb;  
      printf("Elige un numero entero\n");
      scanf("%d",&num);

     CuadradoNumVoid(num);
       
        break;
      case 2:
      printf("**Direccion y contenido de un numero entero**\n");     
      printf("Elige un numero entero\n");
      scanf("%d",&num);
      MostrarDirecYContenido(num);
        
        break;
      case 3:
      printf("**Invertir dos numeros enteros**\n");
      printf("Elige un numero entero\n");
      scanf("%d",&num);
      printf("Elige un otro numero entero\n");
      scanf("%d",&numb);

      Invertir(num,numb);
        
        break;
      case 4:
      printf("4 Ordenar dos numeros enteros\n");
      printf("Elige un numero entero\n");
      scanf("%d",&num);
      printf("Elige un otro numero entero\n");
      scanf("%d",&numb);
      Orden(num,numb);
        
        break;
      
      default:
        break;
      }
      
    }
    
    

    

    return 0;
}

int CuadradoNum(int num){

    return num * num;
}

void CuadradoNumVoid(int num){

    printf("%d al cuadrado es: %d \n",num, num * num);
    

}

void MostrarDirecYContenido(int num){
    printf("Direccion: %p \n",(void *)&num);
    printf("Contenido: %d \n",num);

}

void Invertir(int a,int b){
    int c;
    printf("Valor de a: %d \n",a);
    printf("Valor de b: %d \n",b);
    printf("Ahora invierto-- \n");
    c=a;
    a=b;
    b=c;
    printf("Valor de a: %d \n",a);
    printf("Valor de b: %d \n",b);
    
}

void Orden(int a,int b){
    int c;
    if(a>b){
        c=a;
        a=b;
        b=c;

    }
}