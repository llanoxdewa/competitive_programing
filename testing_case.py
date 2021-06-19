import os
import sys
import time

try:
	pilihan = sys.argv[1]
except:
	pilihan = False

i,n= 1,1
if(pilihan == "y"):
	for case in os.listdir("./case"):
		os.system(f"run_case {case[-1]}")
		skip = input("<enter>")
		i += 1
elif(pilihan == "o"):
	for case in os.listdir('./case'):
		os.system(f"code < case/{case} > out/out{n}")
		print(f"output write to out{n}")
		n+=1

else:
	for f in os.listdir("./case"):
		print(f"CASE#{i}")
		os.system(f"code < case/{f}")
		print("-------------")
		i += 1

if(pilihan != 'o'):
	print(f"testing {i - 1} case done")

