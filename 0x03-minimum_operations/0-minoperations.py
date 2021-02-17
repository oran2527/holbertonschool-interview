#!/usr/bin/python3
""" minimun operations """


def minOperations(n):
    """process to know how many steps it is required for printing n char"""

    if n <= 1:
        return 0
    div = 2
    no = 0
    while n > 1:
        if n % div == 0:
            n = n / div
            no = no + div
        else:
            div = div + 1
    return no
