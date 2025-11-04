def figure():
	print ("Calcola il perimetro delle seguenti figure.")
	print ("Per continuare scegli una delle seguenti figure:")
	print (""" 
	  1| Quadrato
	  2| Cerchio
	  3| Rettangolo
		""")
	
	scelta = int(input("Inserire un opzione: "))
	if scelta == 1:
		lato = float(input("Inserisci il valore del lato: "))
		print ("Il perimetro del quadrato è ", lato*4)
	
	elif scelta == 2:
		raggio = float(input("Inserisci il valore del raggio: "))
		print ("Il valore del perimetro del cerchio è ", 2*raggio*3.14)
	
	elif scelta == 3:
		base = float(input("Inserisci il valore della base: "))
		altezza = float(input("Inserisci il valore dell'altezza: "))
		print ("Il valore del perimetro del rettangolo è ", (base*2)+(altezza*2))
	
	else: 
		print ("Ripsosta non valida")
		
figure()