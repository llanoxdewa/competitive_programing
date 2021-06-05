import os

os.chdir("case")
for fin in os.listdir("."):
	os.system(f"del {fin}")

os.chdir("../out")
for fout in os.listdir("."):
    os.system(f'del {fout}')
