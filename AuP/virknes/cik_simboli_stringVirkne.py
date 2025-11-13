"""
AuPLa0702. Sastādīt Python programmu, kas ļauj noskaidrot, cik reizes teksta rindiņā ir sastopams konkrēts simbols. Gan teksta rindiņu, gan simbolu ievada lietotājs. 
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
--------------------------------------------------------------------------------
Autors: Terēze Bogdane, izmantots  risinājums AuPLa0701.cpp
Izveidota: 16.10.2025.
"""

while True:
    # lietotājs ievada teksta rindiņu
    rind = str(input("Ievadiet teksta rindiņu: "))
    #lietotājs ievada simbolu, kuru meklēt teksta rindiņā rind
    simb = str(input("Ievadiet simbolu: "))
    #skaits, kurā uzskaitīs simbola skaitu rindiņā rind
    skaits = 0
    
    #atrod simbola skaitu teksta rindiņā rind un palielina skaitu
    for char in rind:
        if char == simb:
            skaits +=1
    
    #izvada simbola skaitu rindiņā skaits
    print("Simbols ", char," ir sastopams ", skaits, " reizes.")
    
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
