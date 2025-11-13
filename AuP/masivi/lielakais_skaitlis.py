""""
AuPLa0602. Sastādīt Python programmu, kurā lietotājs ievada veselu skaitļu sarakstu. 
Skaitļu skaitu uzdod lietotājs. 
Pēc ievada jāizdrukā saraksta lielākā elementa vērtība un visas atrašanās vietas. 
Visas atrašanās vietas jāsaglabā citā sarakstā.

"""

ok = 1
while ok == 1:
    
    #lietotājs ievada skaitli, notiek pārbaude, vai tas ir naturāls
    n = int(input("Lūdzu, ievadiet naturālu skaitli n: "))
    while n<1 or m<1:
        print("Kļūda. Ievadītās vērtības nav naturāli skaitļi.\n Lūdzu, mēģiniet vēlreiz!")
        n = int(input("Lūdzu, ievadiet naturālu skaitli n, n>=1: "))   
        
    n = int(input("Ievadiet skaitļu skaitu: "))
    
    liel = int(input("Ievadiet pirmo skaitli : "))
    skaitli = [liel]
    
    for i in range (1, n):
        sk = int(input("Ievadiet nākamo skaitli : "))
        #pārbauda vai ievadītais skaitlis ir lielākais
        if sk>liel: liel=sk
        skaitli.append(sk)
    
    ok = int(input(" Vai turpināt (1) vai beigt (0)? ")) 
