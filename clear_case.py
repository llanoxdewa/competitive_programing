import os

os.chdir("case")
for fin in os.listdir("."):
	os.system(f"del {fin}")

os.chdir("../out")
for fout in os.listdir("."):
    os.system(f'del {fout}')

os.chdir('../expected')
for fex in os.listdir("."):
    os.system(f'del {fex}')


os.chdir('../dif_file')
for diffile in os.listdir("."):
    os.system(f'del {diffile}')
