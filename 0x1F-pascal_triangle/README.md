# 0x1F. Pascal's Triangle

## Holberton Cali

## 15 september 2021

## Orlando Gomez Lopez

## Machine Learning

## Cohort 10

0x1F. Pascal's Triangle
 By Alexa Orrico, Software Engineer at Holberton School
 Ongoing project - started 09-13-2021, must end by 09-17-2021 (in 1 day) - you're done with 0% of tasks.
 Checker was released at 09-15-2021 12:00 AM
 QA review fully automated.
 python quadratic time

## Tasks

## 0. Pascal's Triangle

mandatory
Create a function def pascal_triangle(n): that returns a list of lists of integers representing the Pascal’s triangle of n:

Returns an empty list if n <= 0
You can assume n will be always an integer
guillaume@ubuntu:~/0x1F$ cat 0-main.py
#!/usr/bin/python3
"""
0-main
"""
pascal_triangle = __import__('0-pascal_triangle').pascal_triangle

def print_triangle(triangle):
    """
    Print the triangle
    """
    for row in triangle:
        print("[{}]".format(",".join([str(x) for x in row])))


if __name__ == "__main__":
    print_triangle(pascal_triangle(5))

guillaume@ubuntu:~/0x1F$ 
guillaume@ubuntu:~/0x1F$ ./0-main.py
[1]
[1,1]
[1,2,1]
[1,3,3,1]
[1,4,6,4,1]
guillaume@ubuntu:~/0x1F$ 
Repo:

GitHub repository: holbertonschool-interview
Directory: 0x1F-pascal_triangle
File: 0-pascal_triangle.py
