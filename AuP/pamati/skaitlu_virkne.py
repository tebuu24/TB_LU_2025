while True:
    n = int(input("Ievadiet skaitļu skaitu N, N>=1: "))
    
    #pārbauda vai ievadītais n ir naturāls skaitlis
    while n < 1:
        print("Kļūdaina vērtība. Jāievada N, N>=1.\n Lūdzu, ievadiet vēlreiz.")
        n = int(input("Ievadiet skaitļu skaitu N, N>=1: "))
    
    #ievada pašu pirmo skaitli, kurš veido sākotnējo garāko virkni
    iepr = int(input("Ievadiet veselu skaitli: "))
    liel_gar = 1
    kart_gar = 1
    
    for i in range(0, n-1):
        sk= int(input("Ievadiet veselu skaitli: "))
        # pārbauda, vai ievadītais skaitlis ir lielāks par iepriekšējo
        if sk > iepr:
            kart_gar += 1
            print(kart_gar)
        elif kart_gar > liel_gar: 
            liel_gar = kart_gar
            kart_gar = 1
            print(liel_gar)
            
        iepr = sk
        print(liel_gar)
        
    
    #izvada garākās virknes garumu
    print("Garākās virknes garums: ", liel_gar)
    
    #lietotājs izvēlas, vai sākt programmu vai beigt
    ok = int(input("Vai turpināt (1) vai beigt (0)?\n"))
    if ok !=1:
        break
        
print("Programmas darbība apturēta.")
