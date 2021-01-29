#!/usr/bin/python3
"""program to detect if it is possible open box with keys"""


def canUnlockAll(boxes):
    """ program to detect keys for opening boxes"""

    i = 0
    listbox = []
    lim = len(boxes)
    con = 0

    for j in boxes:
        listbox.append([])
    listbox[i] = [0]

    while lim > con:
        con = 0
        print(i)
        print(len(listbox[i]) - 1)
        print(boxes[i][len(listbox[i]) - 1])
        print("**************************************")
        if type(boxes[i][len(listbox[i]) - 1]) == int:
            i = boxes[i][len(listbox[i]) - 1]
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
