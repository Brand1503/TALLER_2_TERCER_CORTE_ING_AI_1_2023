Algoritmo calcularnomina
	Definir sueldobase Como Real 
	Definir complementodedestino Como Real
	definir complementodecargoacademico Como Real 
	definir sueldobruto como real

	Definir irpf Como Real 
	Definir sueldoneto como real
	Definir horasextras Como Entero
	definir hijos Como Entero
	definir mayoresdependientes Como Entero
	Definir horasextraspagas Como Entero 
	definir porcentjaIRPF como entero

	
	Escribir "Calcular la nómina de un empleado en el mes"
	Escribir "Ingrese el valor del sueldo base:"
	Leer sueldobase
	Escribir "Ingrese el valor del complemento de destino:"
	Leer complementodedestino
	Escribir "Ingrese el valor del complemento de cargo académico:"
	Leer complementodecargoacademico
	Escribir "Ingrese el valor de horas extras:"
	Leer horasextras
	Escribir "Ingrese cuántos hijos tiene:"
	Leer hijos
	Escribir "Ingrese cuántos mayores dependientes tiene:"
	Leer mayoresdependientes
	
	horasextraspagas <- horasextras * 23
	sueldobruto <- sueldobase + complementodecargoacademico + complementodedestino + horasextraspagas
	porcentjaIRPF <- 24 - (2 * hijos) - (1 * mayoresdependientes)
	irpf <- sueldobruto * porcentjaIRPF / 100
	sueldoneto <- sueldobruto - irpf
	
	Escribir "Cálculo de nómina."
	Escribir "Sueldo bruto ", sueldobruto
	Escribir "Porcentaje de IRPF: ", porcentjaIRPF, "%"
	Escribir "Retención por IRPF: ", irpf
	Escribir "Sueldo neto: ", sueldoneto

	
FinAlgoritmo
