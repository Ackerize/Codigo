entrada = input('Ingrese la hora: ')
acumuladorMinutos = 0
nuevaHora = 0

while entrada != '0':
    hora, minutos = entrada.split()
    hora = int(hora[0:-1])
    minutos = int(minutos[0:-3])
    minutos += hora*60
    acumuladorMinutos += minutos

    if acumuladorMinutos >= 60:
        nuevaHora += acumuladorMinutos // 60
        acumuladorMinutos %= 60

    entrada = input('Ingrese la hora: ')

    
print(f'{nuevaHora}h {acumuladorMinutos}min')
