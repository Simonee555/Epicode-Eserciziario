import random
import string


def scegli_psw():
    print("Generatore di password\n")
    complessa = string.ascii_letters + string.punctuation
    semplice = string.digits + string.ascii_letters
    if input ("Vorresti una password più semplice o complessa? \nA. Semplice\nB. Complessa\n\n") == "A":
        lunghezza = 8
        tipo = semplice
    else:
        lunghezza = 20
        tipo = complessa
    
    password = ""
    counter = 0

    while counter < lunghezza:
        char = random.choice(tipo)
        password += char
        counter += 1
    print (f"\nLa tua password è: {password}")

scegli_psw()