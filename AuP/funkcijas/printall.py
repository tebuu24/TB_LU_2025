"""
AuPLa1003. Izveidot Python funkciju printall(vērtības), kas izdrukā visas padotās vērtības.
Piemērs 1. printall(1, 2) 
Piemērs 2. printall(1, -3, 2, 7, 8) 
Izveidot Python programmu, kas izsauc funkciju printall.
"""

def printall(*mas):
    for i in mas:
        print(i)


printall(1, 2)
printall("a","b","c")
printall(1, -3, 2, 7, 8)
