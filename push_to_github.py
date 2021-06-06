import shutil
import os


ubah_nama = input("masukan perubahan nama: ")
target = f"d:\\llano\\cpg\\solution_codeforce\\{ubah_nama}.cpp"
shutil.copyfile("d:\\llano\\cpg\\cpp\\code.cpp",target)
os.chdir('d:\\llano\\cpg\\solution_codeforce')
os.system('git add .')
os.system(f'git commit -m "my solution for {ubah_nama}"')
os.system('git push -u LXD master')

