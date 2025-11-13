#pieprasa ievadīt skaitļu skaitu N un nodrošina, ka N ir korekts (N>=1)
n = int(input("Lūdzu ievadiet, cik skaitļus jūs vēlaties ievadīt: "))
while n<1:
    n = int(input("Kļūdaina vērtība! Nepareiza vērtība. Ievadiet N, N>=1: "))

#lietotāja pirmais ievadītais skaitlis tiek piešķirts 
liel = int(input("Lūdzu ievadiet skaitli: "))

#nosaka lielākā skaitļa vērtību liel no ievadītajiem N veselajiem skaitļiem
#lieto "pakāpiena" metodi
#tā kā mēs apstrādājam tikai vienu skaitli vienlaicīgi, mēs varma izmantot ciklu ar skaitītāju
for i in range(n-1):
    sk = int(input("Lūdzu ievadiet skaitli: "))
    if sk>liel:
        liel = sk

#izvada lielāko skaitli
print(liel, " ir lielākais skaitlis")
