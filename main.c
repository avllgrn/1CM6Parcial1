#include <stdio.h>
#include <math.h>

float sumaDosNumeros(float x, float y);
float calculaAreaRectangulo(float b, float h);
float calculaPerimetroRectangulo(float b, float h);

int main(void){
	float base, altura,area,perimetro;
	//1.Pide datos
	printf("Ingresa base ");
	scanf("%f",&base);
	printf("Ingresa altura ");
	scanf("%f",&altura);

	area = calculaAreaRectangulo(base, altura);
	perimetro = calculaPerimetroRectangulo(base, altura);

	//3.Muestra resultado
	printf("base = %f\n",base);
	printf("altura = %f\n",altura);
	printf("area = %f\n",area);
	printf("perimetro = %f\n",perimetro);
    return 0;
}

float sumaDosNumeros(float x, float y){
    float z;
    //2.Calcula formula
    z = x+y;
    return z;
}
float calculaAreaRectangulo(float b, float h){
    float a;
    a = b*h;//2.Calcula formula
    return a;
}
float calculaPerimetroRectangulo(float b, float h){
    float p;
    p = 2*b + 2*h;//2.Calcula formula
    return p;
}
