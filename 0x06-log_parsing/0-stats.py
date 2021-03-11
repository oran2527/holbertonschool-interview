#!/usr/bin/python3
""" log parsing """

from signal import signal, SIGINT
import sys

if __name__ == "__main__":
    i = 1
    file_size = 0
    status_list = {"200": 0,
                   "301": 0,
                   "400": 0,
                   "401": 0,
                   "403": 0,
                   "404": 0,
                   "405": 0,
                   "500": 0}

    try:
        for line in sys.stdin:
            try:
                status_code = line.split()[-2]
                if status_code in status_list:
                    status_list[status_code] += 1
                file_size += int(line.split()[-1])
                if i % 10 == 0:
                    print("File size: {}".format(file_size))
                    for k, v in sorted(status_list.items()):
                        if v:
                            print("{}: {}".format(k, v))
                i += 1
            except:
                pass
    except KeyboardInterrupt:
        print("File size: {}".format(file_size))
        for k, v in sorted(status_list.items()):
            if v:
                print("{}: {}".format(k, v))
        raise
    print("File size: {}".format(file_size))
    for k, v in sorted(status_list.items()):
        if v:
            print("{}: {}".format(k, v))
