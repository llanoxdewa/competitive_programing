import pyperclip
import sys



i = sys.argv[1]



with open(f"expected/ex{i}","w") as exfile:
    file_hasil =[char.replace(' ','') for char in pyperclip.paste().splitlines() if char not in (' ','','\t')]
    exfile.write('\n'.join(file_hasil) + '\n')
    print(f"input sudah di masukan ke dalam ex#{i}")

