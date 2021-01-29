#!/usr/bin/python3
"""program to detect if it is possible open box with keys"""


def canUnlockAll(boxes):
    """ program to detect keys for opening boxes"""

    i = 0
    listbox = []
    lim = len(boxes)
    con = 0
    sec = 0

    for j in boxes:
        listbox.append([])
    listbox[i] = [0]

    while lim > con:
        con = 0
        if len(boxes[i]) == 0:
            break
        if len(listbox[i]) < len(boxes[i]):
            sec = len(listbox[i]) - 1
        else:
            sec = len(boxes[i]) - 1
        if type(boxes[i][sec]) == int:
            i = boxes[i][sec]
            listbox[i].append(0)
            print(listbox)
            for j in listbox:
                if j:
                    con = con + 1
        else:
            break
    con = 0
    for j in listbox:
        if j:
            con = con + 1
    if lim == con:
        return True
    else:
        return False
