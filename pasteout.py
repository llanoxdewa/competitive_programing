import pyperclip
import sys



i = sys.argv[1]



with open(f"expected/ex{i}","w") as exfile:
    exfile.write(pyperclip.paste() + "\n")
    print(f"input sudah di masukan ke dalam case#{i}")

