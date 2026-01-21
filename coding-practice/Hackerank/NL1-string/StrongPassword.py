def minimumNumber(n, password):
    # Return the minimum number of characters to make the password strong
    especial = 0
    numero = 0
    maiuscula = 0
    minuscula = 0
    resultado = 0
    lista = [0, 0, 0, 0]
    ## Tem que passar por cada caractere e fazer um if para verificar o tipo de cada caractere 
    for p in password:
        if not p.isalnum():
            especial = especial + 1 
            lista[0] = especial

        elif p.isdigit():
            numero = numero + 1 
            lista[1] = numero
            
        elif p.isupper():
            maiuscula = maiuscula + 1
            lista[2] = maiuscula
            
        elif p.islower():
            minuscula = minuscula + 1
            lista[3] = minuscula
    
    for num in lista:
        if num == 0:
            resultado = resultado + 1
            
    while((resultado+n)<6):     
        resultado = resultado + 1

    return resultado 


'''Melhor resposta 
def minimumNumber(n, password):
    has_digit = False
    has_lower = False
    has_upper = False
    has_special = False

    for c in password:
        if c.isdigit():
            has_digit = True
        elif c.islower():
            has_lower = True
        elif c.isupper():
            has_upper = True
        else:
            has_special = True

    missing = 0
    if not has_digit: missing += 1
    if not has_lower: missing += 1
    if not has_upper: missing += 1
    if not has_special: missing += 1

    return max(missing, 6 - n)
'''