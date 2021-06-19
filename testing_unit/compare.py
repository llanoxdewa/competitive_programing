import os
import sys
import pyperclip

i = sys.argv[1]

os.system(f"code < case/case{i} > out/out{i}")

fileout = open(f"out/out{i}","r").read()
fileex = open(f"expected/ex{i}","r").read()

if(fileout == fileex):
    os.system("status succes")
else:
    os.system("status failed")
