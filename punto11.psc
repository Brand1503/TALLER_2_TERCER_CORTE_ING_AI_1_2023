Algoritmo punto11
    Definir capital como real
    Definir ratio como real
    Definir plazo como entero
    Definir intereses como real
    Definir cuota como real
    Definir pagototal como real
    Definir interesestotales como real
    
    Escribir "Hola, vamos a calcular el valor de la cuota de un préstamo"
    Escribir "Ingresa los siguientes datos:"
    Escribir "Valor del capital prestado:"
    Leer capital
    Escribir "Porcentaje de los intereses anuales:"
    Leer intereses
    Escribir "Cuantos años dura el préstamo:"
    Leer plazo
    
    plazo <- plazo * 12
    ratio <- intereses / 12.0
    cuota <- (capital * ratio) / 100.0 * (1 - (1 + (ratio / 100))^(-plazo))
    pagototal <- cuota * plazo
    interesestotales <- pagototal - capital
    
    Escribir "El valor total de la cuota mensual es de ", cuota
    Escribir "El valor total pagado es de ", pagototal
    Escribir "La cantidad de amortización es de ", capital
    Escribir "El total de intereses es de ", interesestotales
    
FinAlgoritmo

