Algoritmo punto9
	Definir ladoa como entero
	Definir ladob como entero
	Definir angulo como entero
	Definir PII como real
	Definir resultado como real
	
	PII <- 3.141592
	Escribir "Hola, hoy hallaremos el �rea del tri�ngulo mediante la ley del seno."
	Escribir "Por favor, ingresa el valor del lado a:"
	Leer ladoa
	Escribir "Ingresa el valor del lado b:"
	Leer ladob
	Escribir "Ingresa el valor del �ngulo formado en grados:"
	Leer angulo
	
	resultado <- (1.0 / 2.0) * ladoa * ladob *Sen((PII / 180) * angulo)
	
	Escribir "El �rea del tri�ngulo es: ", resultado
	
FinAlgoritmo


