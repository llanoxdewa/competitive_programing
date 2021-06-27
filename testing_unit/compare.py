import os
import sys
import pyperclip

i = sys.argv[1]

os.system(f"code < case/case{i} > out/out{i}")

fileout = open(f"out/out{i}","r").read().splitlines()
fileex = open(f"expected/ex{i}","r").read().splitlines()

if(''.join(fileout) == ''.join(fileex)):
    os.system("status succes")
else:
    os.system("status failed")
