Proceso ConvertirSegundosAMinutosHoras
    Definir segundos Como Entero
    Definir minutos, horas Como Real
	
    Escribir "Hola, hoy convertiremos el tiempo de segundos a minutos y horas."
    Escribir "Ingresa el valor del tiempo en segundos:"
    Leer segundos
	
    minutos <- segundos / 60
    horas <- minutos / 60
	
    Escribir "El valor es:"
    Escribir "Segundos =", segundos
    Escribir "Minutos =", minutos
    Escribir "Horas =", horas
	
FinProceso