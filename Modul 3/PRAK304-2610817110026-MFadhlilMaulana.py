n = int(input("Masukkan nilai n: "))

if n == 0:
    print("Nol")
elif n >= 1 and n <= 9:
    print("Satuan")
elif n == 10 or (n >= 20 and n <= 99):
    print("Puluhan")
elif n >= 11 and n <= 19:
    print("Belasan")
elif n >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
else:
    print("Anda Menginput Bilangan Negatif")