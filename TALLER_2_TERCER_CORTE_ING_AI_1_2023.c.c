#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int finish(void);
int punto1(void);
int punto2(void);
int punto3(void);
int punto4(void);
int punto5(void);
int punto6(void);
int punto7(void);
int punto8(void);
int punto9(void);
int punto10(void);
int punto11(void);

int main() {

    int end = 1;
    int opc = 0;


    while (end) {
        printf("TALLER_2_TERCER_CORTE_ING_AI_1_2023 \n"); 
        printf("[1]Punto 1\n");
        printf("[2]Punto 2\n");
        printf("[3]Punto 3\n");
        printf("[4]Punto 4\n");
        printf("[5]Punto 5\n");
        printf("[6]Punto 6\n");
        printf("[7]Punto 7\n");
        printf("[8]Punto 8\n");
        printf("[9]Punto 9\n");
        printf("[10]Punto 10\n");
        printf("[11]Punto 11\n");

        scanf("%d", &opc);
        system ("cls");

        if (opc == 1) {
            punto1 (); 
            finish (); 
            system ("cls");
        } else if (opc == 2) {
            punto2 (); 
            finish ();
            system ("cls");
        } else if (opc == 3) {
            punto3 ();
            finish ();
            system ("cls");
       } else if (opc == 4){
            punto4 ();
            finish ();
            system ("cls");
       }else if (opc == 5){
            punto5 ();
            finish ();
            system ("cls");
        }else if (opc ==6){
            punto6 ();
            finish ();
            system ("cls");
        }else if (opc ==7){
            punto7 ();
            finish ();
            system ("cls");
        }else if (opc ==8){
            punto8 ();
            finish ();
            system ("cls");
        }else if (opc ==9){
            punto9 ();
            finish ();
            system ("cls");
        }else if (opc ==10){
            punto10 ();
            finish ();
            system ("cls");
        }else if (opc ==11){
            punto11 ();
            finish ();
            system ("cls");
        }
    }
    return 0;
}
int finish (){    
    int finish = 0;  
    printf("DESEA SALIR (0) O REGRESAR AL MENU PRINCIPAL (1) ");
    scanf("%d", &finish);
    if(finish == 0){
        exit(0);
    }
    return 0;

}
int punto1(void)
{
    float a = 14.5;
    float b = 26.79; 
    float solucion; 
    float pi = 3.141592; 

    printf("Hola el volumen de un cono. \n");
    printf("el valor del radio es de %.2f \n",a);
    printf("el valor de la altura es de %.2f \n",b);
    solucion = (pi*a*a*b)/3;
    printf("El volumen del cono es de %f \n",solucion);
    return 0; 
}
int punto2(void){
    float GradosFahrenheit; 
    float solution;

    printf("Hola necesitas pasar de grados Fahrenheit y a grados Celsius \nPor favor ingresa los siguientes datos\n");
    printf("ingrese el valor en grados Fahrenheit \n");
    scanf("%f",&GradosFahrenheit);
    solution = (float)5 / (float)9 * (GradosFahrenheit - 32); 
    printf("El resultado es %.2f grados Celsius  \n", solution);
    return 0; 
}int punto3(){
    int segundos;
    float minutos;
    float horas; 
    printf("Hola, hoy pasaremos el tiempo de segundos a minutos y a horas\n");
    printf("Ingresa el valor del tiempo en segundos: \n");
    scanf("%d", &segundos);

    minutos = (float)segundos /(float)60;
    horas = (float)minutos /(float)60; 
    printf("El valor es: \n");
    printf("Segundos = %.2d\n",segundos);
    printf("Minutos = %.2f\n",minutos);
    printf("Horas = %.2f\n",horas);
    return 0; 
}int punto4(){
    float parcialPR1;
    float tallerPR1;
    float quiz1;
    float ejercicioenclase;
    float quiz2;
    float exposicion; 
    float nota70;
    float nota30;
    float nota100;
    
    printf("HALLAR LA NOTA DEFINITIVA \n");
    printf("Ingresa las notas definitivas:\n");
    printf("Nota del Parcial 1: \n");
    scanf("%f",&parcialPR1);
    printf("Nota del Taller 1: \n");
    scanf("%f",&tallerPR1);
    printf("Nota del Quiz 1:\n");
    scanf("%f",&quiz1);
    printf("Nota del ejercicio en clase: \n");
    scanf("%f",&ejercicioenclase);
    printf("Nota del quiz 2: \n");
    scanf("%f",&quiz2);
    printf("Nota de la exposicion: \n");
    scanf("%f",&exposicion);

    nota70 = ((parcialPR1*80)/100)+((tallerPR1*20)/100);
    nota30 = ((quiz1*25)/100)+((ejercicioenclase*25)/100)+((quiz2*25)/100)+((exposicion*25)/100);
    nota100 = ((nota70*70)/100)+((nota30*30)/100);

    printf("LA NOTA DEFINITIVA ES: %.1f\n",nota100);
    return 0;
}
int punto5(){
    int r;
    int a;
    int b;
    int c;
    int d;
    float solucion; 

    printf("Ingrese el valor de r: \n");
    scanf("%d",&r);
    printf("Ingrese el valor de a: \n");
    scanf("%d",&a);
    printf("Ingrese el valor de b: \n");
    scanf("%d",&b);
    printf("Ingrese el valor de c: \n");
    scanf("%d",&c);
    printf("Ingrese el valor de d: \n");
    scanf("%d",&d);

    solucion= 4.0 / (3.0 * (r + 34)) - 9.0 * (a + b * c) + (3.0 + d * (2 + a)) / (a + b * d);
    printf("la solucion de la formula es: %f\n", solucion); 

    return 0; 
}int punto6(){
    int x = 12;
    float sigma = 2.1836;
    int y = 3;
    float lambda = 1.11695;
    float alfa = 328.67;
    float f; 

    f= 3*((x+sigma*y)/(x*x-y*y))-lambda * (alfa-13.7);

    printf("el resultado es %f\n", f);

    return 0;
}
int punto7(){
    float sueldobase;
    float complementodedestino;
    float complementodecargoacademico;
    int horasextras;
    int hijos;
    int mayoresdependientes;
    float sueldobruto;
    int horasextraspagas;
    float irpf;
    float sueldoneto;
    int porcentjaIRPF;

//solicto los valores necesarios
    printf("Calcular la nomina de un empleado en el mes\n");
    printf("Ingrese el valor del sueldo base:\n");
    scanf("%f",&sueldobase);
    printf("Ingrese el valor del complemento de destino:\n");
    scanf("%f",&complementodedestino);
    printf("ingrese el valor del complemento de cargo academico:\n");
    scanf("%f",&complementodecargoacademico);
    printf("Ingrese el valor de horas estras:\n");
    scanf("%d",&horasextras);
    printf("Ingrese cuantos hijos tiene:\n");
    scanf("%d",&hijos);
    printf("Ingrese cuantos mayores dependientes tiene:\n");
    scanf("%d",&mayoresdependientes);
    
    horasextraspagas = horasextras * 23;// calculo el valor de las horas;
    sueldobruto = sueldobase + complementodecargoacademico + complementodedestino + horasextraspagas;
    porcentjaIRPF = 24 - (2 * hijos) - (1 * mayoresdependientes);
    irpf = sueldobruto*porcentjaIRPF/100;
    sueldoneto = sueldobruto - irpf;
    system("cls");

    printf("Calculo de nomina.\n");
    printf("Sueldo bruto %.2f\n", sueldobruto);
    printf("Porcentaje de IRPF:%d%%\n", porcentjaIRPF);
    printf("Retencion por IRPF:%.2f\n", irpf);
    printf("Sueldo neto:%.2f\n",sueldoneto);


    return 0;

}int punto8(){
    int a = 1;
    double d = 1.0;

    a = 46 % 9 + 4 * 4 - 2;
    printf("1: %d\n", a);

    a = 45 + 43 % 5 * (23 * 3 % 2);
    printf("2: %d\n", a);

    a = 45 + 45 * 50 % a--;
    printf("3: %d\n", a);

    d = 1.5 * 3 + (++d);
    printf("4: %f\n", d);

    d = 1.5 * 3 + d++;
    printf("5: %f\n", d);

    a= a % (3 / a + 3);
    printf("6: %d\n", a);

    return 0;
}
int punto9(){
    int ladoa; 
    int ladob;
    int angulo; 
    double PI =3.141592;
    float resultado; 
    printf("Hola hoy hallaremos el area del triangulo mediante la ley del seno\n");
    printf("Por favor ingresa el valor del lado a:\n");
    scanf("%d", &ladoa);
    printf("Ingresa el valor del lado b:\n");
    scanf("%d", &ladob);
    printf("Ingresa el valor del angulo formado en grados:\n");
    scanf("%d", &angulo);

    resultado = (1.0/2.0)*ladoa*ladob*sin((PI/180)*angulo);
    printf("El area del triangulo es:%f \n", resultado);
    
    return 0;

}int punto10(){
    int ladoa;
    int ladob;
    int angulo;
    float resultado;
    double PI =3.141592;
    float anguloradianes;

    printf("Hallar el angunlo en radianes: \n");
    printf("Ingresa el valor del lado a: \n");
    scanf("%d", &ladoa);
    printf("Ingresa el valor del lado b: \n");
    scanf("%d", &ladob);
    printf("Ingresa el valor del angulo formado en grados: \n");
    scanf("%d",&angulo); 
    anguloradianes = (PI/180)*angulo;
    resultado= (1.0/2.0)*ladoa*ladob*sin(anguloradianes);
    

    printf("El area del triangulo es:%f \n", resultado);
    return 0;

}int punto11(){
    float capital; 
    float ratio;
    int plazo;
    float intereses; 
    float cuota; 
    float pagototal;
    float interesestotales;
    
    printf("Hola vamos el valor de la cuota de un prestamo\n");
    printf("ingresa los siguientes datos:\n");
    printf("Valor del capital prestado: \n");
    scanf("%f",&capital); 
    printf("Porcentaje de los Intereses anuales: \n");
    scanf("%f", &intereses);
    printf("Cuantos años dura el prestamo:\n");
    scanf("%d", &plazo);

    plazo= plazo*12;
    ratio= intereses /12.0;
    cuota= (capital*ratio)/100.0*(1 - pow(1 + (ratio / 100),-plazo));
    pagototal = cuota*plazo;

    interesestotales = pagototal-capital;

    printf("El valor total de la cuota mensual es de %.2f\n", cuota);
    printf("el valor total pagado es de %.2f\n",pagototal);
    printf("la cantidad del amortizacion es de %.2f\n", capital);
    printf("el total de interes es de %.2f\n",interesestotales);


    return 0;
}


