import pyperclip
import sys

err = False

i = sys.argv[1]

with open(f"case/case{i}",'w') as files:
    file_hasil = [char for char in pyperclip.paste().splitlines() if char not in (' ','','\t')]
    files.write('\n'.join(file_hasil))
    print(f"input sudah di masukan ke dalam case#{i}")


