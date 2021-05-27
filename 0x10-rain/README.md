# 0x10. Rain

## Holberton Cali

## 27 may 2021

## Orlando Gómez López

## Machine Learning

## Cohort 10

0x10. Rain
 Specializations - Interview Preparation ― Algorithms
 By Jesse Hedden, Software Engineer at Holberton School
 Ongoing project - started 05-24-2021, must end by 05-28-2021 (in about 12 hours) - you're done with 0% of tasks.
 Checker was released at 05-26-2021 12:00 AM
 QA review fully automated.
 linear time python

Requirements
General
Allowed editors: vi, vim, emacs
All your files will be interpreted/compiled on Ubuntu 14.04 LTS using python3 (version 3.4.3)
All your files should end with a new line
The first line of all your files should be exactly #!/usr/bin/python3
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the PEP 8 style (version 1.7.x)
You are not allowed to import any module
All modules and functions must be documented
All your files must be executable

## Tasks

## 0. Rain

mandatory
Given a list of non-negative integers representing the heights of walls with unit width 1, as if viewing the cross-section of a relief map, calculate how many square units of water will be retained after it rains.

Prototype: def rain(walls)
walls is a list of non-negative integers.
Return: Integer indicating total amount of rainwater retained.
Assume that the ends of the list (before index 0 and after index walls[-1]) are not walls, meaning they will not retain water.
If the list is empty return 0.
jesse@ubuntu:~/0x10$ cat 0_main.py
#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))
    walls = [2, 0, 0, 4, 0, 0, 1, 0]
    print(rain(walls))

jesse@ubuntu:~/0x10$ 
jesse@ubuntu:~/0x10$ ./0_main.py
6
6
jesse@ubuntu:~/0x10$ 
Visual representation of the walls [0, 1, 0, 2, 0, 3, 0, 4]



Visual representation of the walls [2, 0, 0, 4, 0, 0, 1, 0]



Repo:

GitHub repository: holbertonschool-interview
Directory: 0x10-rain
File: 0-rain.py
