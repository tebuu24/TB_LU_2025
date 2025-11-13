"""
AuPLa07_papildus. 
Sastādīt programmu, kas dotam veselam skaitlim izdrukā vidējo(s) pēc novietojuma ciparu(s).
Piemērs 1. 123 -> 2
Piemērs 2. -1234 -> 23
Piemērs 3. 0 -> 0

--------------------------------------------------------------------------------
Autors: Terēze Bogdane, izmantots  risinājums AuPLa0701.py
Izveidota: 16.10.2025.
"""

while True:
    # lietotājs ievada teksta rindiņu
    rind = str(input("Ievadiet teksta rindiņu: "))
    
    #noskaidro virknes garumu
    garums = len(rind)
    
    #atrod kura pozīcija sarakstā ir vidējā
    #ja ir pāra skaitlis tad būs divas vidējās, ja ir nepāra skaitlis tad būs viena vidējā pozīcija
    
    #izvada virknes elementus ar atrasto pozīciju/-ām
    
    if garums%2 != 0:
        #ja ir nepāra
        pozicija = round(garums/2)
        print("Vidējais simbols: ",rind[pozicija])
    else:
        #ja ir pāra
        pozicija2 = round(garums/2)
        pozicija1 = pozicija1 - 1
        print("Vidējie simboli: ",rind[pozicija1], " ",rind[pozicija2])
    
    
    
    
    #lietotājs izvēlas, vai sākt programmu vai beigt
    ok = int(input("Vai turpināt (1) vai beigt (0)?\n"))
    if ok !=1:
        break
        
print("Programmas darbība apturēta.")

"""       
----------------------Testu plāns----------------------------------
   teksta rindiņa       simbols       paredzamais rezultāts
 " Te ir teksts "         ' '                    4
 "a,b!"                   'c'                    0
 ------------------------------------------------------------------
"""
