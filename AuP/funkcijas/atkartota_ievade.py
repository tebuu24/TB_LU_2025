"""
-----------------------------------------------
Darba autore: Terēze Bogdane

AuPLa0802. Sastādīt Python funkciju getNatural(), kas atgriež kā rezultātu korektu naturālu skaitli. 
Skaitļa vērtību pieprasa ievadīt lietotājam tik ilgi, kamēr ievada korektu vērtību – vērtība lielāka par nulli. 
Sastādīt arī programmu, kurā tiek izsaukta funkcija getNatural. 

Programma veidota: 22.10.2025.
-----------------------------------------------
"""


"""
def getNatural()

Funkcija getNatural() -
 atgriež kā rezultātu korektu naturālu skaitli, kuru pieprasa ievadīt lietotājam tik ilgi, kamēr ievada veselu skaitli lielāku par 0.
"""
def getNatural():
    n = int(input("Ievadiet skaitļu skaitu N, N>=1: "))

    #Pārbauda vērtības atbilstību
    while n<1:
        n = int(input("Kļūdaina vērtība. Jāievada N, N>=1: "))
        
    return n

ok = 1
while ok == 1:
    print("Naturāls skaitlis ", getNatural())
    
    #lietotājam piedāvā programmas atkārtotu izpildi
    ok = int(input(" Vai turpināt (1) vai beigt (0)? "))     
