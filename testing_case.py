import os
import sys
import time

try:
	pilihan = sys.argv[1];
except:
	pilihan = False;

i,n= 1,1
if(pilihan == "y"):
	for f in os.listdir("./case"):
		print(f"CASE#{i}")
		print("@INPUT")
		with open('case/'+f,'r') as inputf:
			print('\n'.join([t for t in inputf.read().splitlines() if t != '']))
		print("@OUTPUT")
		start = time.time()
		os.system(f"code < case/{f}")
		end = time.time()	
		print(f'done in {end - start}s')	
		print("-------------")
		i += 1

elif(pilihan == "o"):
	for case in os.listdir('./case'):
		os.system(f"code < case/{case} > out/out{n}")
		n+=1	

else:
	for f in os.listdir("./case"):
		print(f"CASE#{i}")
		os.system(f"code < case/{f}")
		print("-------------")
		i += 1
print(f"testing {i - 1} case done")
