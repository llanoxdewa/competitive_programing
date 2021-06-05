import pyperclip
import sys

i = int(input("case: "))
with open(f"case/case{i}",'w') as files:
	files.write(pyperclip.paste())
print(f"input sudah di masukan ke dalam case#{i}")


