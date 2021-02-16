#!/usr/bin/python3
""" minimun operations """


def minOperations(n):
    """process to know how many steps it is required for printing n char"""

    l = []
    cn = n
    add = ''
    cont = 1

    if n <= 1:
        return 0

    if n % 2 == 0:
        while (cn > 1):
            l.append(int(cn / 2))
            cn = int(cn / 2)

    if n % 3 == 0:
        while (cn > 1):
            l.append(int(cn / 3))
            cn = int(cn / 3)

    if n % 2 != 0 and n % 3 != 0:
        return n

    text = 'H'

    while len(text) < n:
        if len(text) in l:
            add = str(text)
            cont = cont + 1
        text = text + add
        cont = cont + 1

    print(text)

    return cont - 1
