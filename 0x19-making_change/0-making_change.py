#!/usr/bin/python3
""" Making change """


def makeChange(coins, total):
    """ Making change """

    if total <= 0:
        return 0
    coins_dic = {}
    coins = sorted(coins, reverse=True)
    for coin in coins:
        if total / coin >= 1:
            coins_dic[coin] = int(total / coin)
            total = total % coin
        if total == 0:
            break
    if total != 0:
        return -1
    return sum(coins_dic.values())
