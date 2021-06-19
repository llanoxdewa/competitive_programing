import pyperclip
import sys

err = False

i = sys.argv[1]

with open(f"case/case{i}",'w') as files:
    files.write(pyperclip.paste())
    print(f"input sudah di masukan ke dalam case#{i}")


