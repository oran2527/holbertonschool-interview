# 0x09. UTF-8 Validation

## Holberton Cali

## 3 april 2021

## Orlando Gomez Lopez

## Machine Learning

## Cohort 10

0x09. UTF-8 Validation

 Specializations - Interview Preparation ― Algorithms
 By Carrie Ybay, Software Engineer at Holberton School
 Ongoing project - started 03-29-2021, must end by 04-06-2021 (in 2 days) - you're done with 0% of tasks.
 Checker was released at 04-02-2021 12:00 AM
 QA review fully automated.
 bit manipulation python

Resources
Read or watch:

UTF-8
Characters, Symbols, and the Unicode Miracle
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be interpreted/compiled on Ubuntu 14.04 LTS using python3 (version 3.4.3)
All your files should end with a new line
The first line of all your files should be exactly #!/usr/bin/python3
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the PEP 8 style (version 1.7.x)
All your files must be executable

## Tasks

## 0. UTF-8 Validation

mandatory
Write a method that determines if a given data set represents a valid UTF-8 encoding.

Prototype: def validUTF8(data)
Return: True if data is a valid UTF-8 encoding, else return False
A character in UTF-8 can be 1 to 4 bytes long
The data set can contain multiple characters
The data will be represented by a list of integers
Each integer represents 1 byte of data, therefore you only need to handle the 8 least significant bits of each integer
carrie@ubuntu:~/0x09-utf8_validation$ cat 0-main.py
#!/usr/bin/python3
"""
Main file for testing
"""

validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))

data = [229, 65, 127, 256]
print(validUTF8(data))

carrie@ubuntu:~/0x09-utf8_validation$
carrie@ubuntu:~/0x09-utf8_validation$ ./0-main.py
True
True
False
carrie@ubuntu:~/0x09-utf8_validation$
Repo:

GitHub repository: holbertonschool-interview
Directory: 0x09-utf8_validation
File: 0-validate_utf8.py
  
